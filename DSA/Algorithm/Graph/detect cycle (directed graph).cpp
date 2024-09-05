#include <bits/stdc++.h>
using namespace std;

bool dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, vector<bool> &currentPath)
{
    visited[vertex] = true;
    currentPath[vertex] = true;

    for (auto adjacent : graph[vertex])
    {
        if (visited[adjacent])
        {
            if (currentPath[adjacent])
                return true;
        }
        else
        {
            if (dfs(adjacent, graph, visited, currentPath))
                return true;
        }
    }
    currentPath[vertex] = false;

    return false;
}

bool isCyclic(vector<vector<int>> &graph)
{
    vector<bool> visited(graph.size() + 1, false);
    vector<bool> currentPath(graph.size() + 1, false);

    for (int i = 0; i < graph.size(); i++)
    {
        if (visited[i])
            continue;

        if (dfs(i, graph, visited, currentPath))
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

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        // graph[v2].push_back(v1);
    }

    if (isCyclic(graph))
        cout << "Cycle detected!\n";
    else
        cout << "Cycle not detected!\n";

    return 0;
}