#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> connectedComponents;
vector<int> currentConnectedComponent;

void bfs(int source, vector<vector<int>> &graph, vector<bool> &visited)
{
    queue<int> frontier;

    visited[source] = true;
    frontier.push(source);
    currentConnectedComponent.push_back(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                frontier.push(adjacent);
                currentConnectedComponent.push_back(adjacent);
            }
        }
    }
}

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[vertex] = true;
    currentConnectedComponent.push_back(vertex);

    for (auto adjacent : graph[vertex])
    {
        if (visited[adjacent])
            continue;

        dfs(adjacent, graph, visited);
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        currentConnectedComponent.clear();
        // bfs(i, graph, visited);
        dfs(i, graph, visited);
        connectedComponents.push_back(currentConnectedComponent);
        count++;
    }

    cout << count << endl;
    for (auto ccc : connectedComponents)
    {
        for (auto c : ccc)
            cout << c << " ";
        cout << endl;
    }

    return 0;
}