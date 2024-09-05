#include <bits/stdc++.h>
using namespace std;

bool bfs(int source, vector<vector<int>> &graph, vector<bool> &visited)
{
    queue<pair<int, int>> frontier;

    visited[source] = true;
    frontier.push({source, -1});

    while (!frontier.empty())
    {
        int vertex = frontier.front().first;
        int parent = frontier.front().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            if (visited[adjacent])
            {
                if (adjacent != parent)
                    return true;
            }
            else
            {
                visited[adjacent] = true;
                frontier.push({adjacent, vertex});
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
        else
        {
            if (dfs(adjacent, graph, visited, vertex))
                return true;
        }
    }
    return false;
}

bool isCycle(vector<vector<int>> &graph)
{
    vector<bool> visited(graph.size() + 1, false);
    for (int i = 1; i <= graph.size(); i++)
    {
        if (visited[i])
            continue;

        // if (bfs(i, graph, visited))
        if (dfs(i, graph, visited, -1))
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

    if (isCycle(graph))
        cout << "Cycle detected!\n";
    else
        cout << "Cycle not detected!\n";

    return 0;
}