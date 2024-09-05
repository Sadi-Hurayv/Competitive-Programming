#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited)
{
    // Take action on the vertex after entering the vertex
    cout << vertex << endl;
    visited[vertex] = true;

    for (auto adjacent : graph[vertex])
    {
        // Take action on the child or adjacent before entering the child or adjacent
        if (visited[adjacent])
            continue;

        dfs(adjacent, graph, visited);

        // Take action on the child or adjacent after exiting the child or adjacent
    }
    // Take action on the vertex before exiting the vertex

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

    dfs(1, graph, visited);

    return 0;
}