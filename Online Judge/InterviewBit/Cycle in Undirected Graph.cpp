#include <bits/stdc++.h>
using namespace std;

bool bfs(int source, vector<vector<int>> &graph, vector<bool> &visited)
{
    vector<int> parent(graph.size() + 1, -1);
    queue<int> frontier;

    visited[source] = true;
    frontier.push(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            if (visited[adjacent])
            {
                if (adjacent != parent[vertex])
                    return true;
            }
            else
            {
                visited[adjacent] = true;
                parent[adjacent] = vertex;
                frontier.push(adjacent);
            }
        }
    }
    return false;
}

bool dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, int parent)
{
    visited[vertex] = true;
    for (auto adjacent : graph[vertex])
    {
        if (visited[adjacent])
        {
            if (adjacent != parent)
                return true;
        }
        else if (dfs(adjacent, graph, visited, vertex))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long int n, e, v1, v2;
    cin >> n >> e;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    vector<bool> visited(n + 1, false);
    bool hasCycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        // if (bfs(i, graph, visited))
        if (dfs(i, graph, visited, -1))
        {
            hasCycle = true;
            break;
        }
    }

    if (hasCycle)
        cout << "Cycle detected!\n";
    else
        cout << "Cycle not detected!\n";

    return 0;
}