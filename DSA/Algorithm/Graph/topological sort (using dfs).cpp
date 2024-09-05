#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, stack<int> &topoStack)
{
    visited[vertex] = true;
    for (auto adjacent : graph[vertex])
    {
        if (!visited[adjacent])
            dfs(adjacent, graph, visited, topoStack);
    }
    topoStack.push(vertex);
}

vector<int> topologicalSort(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    stack<int> topoStack;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i, graph, visited, topoStack);
    }

    vector<int> topoOrder;
    while (!topoStack.empty())
    {
        topoOrder.push_back(topoStack.top());
        topoStack.pop();
    }

    return topoOrder;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2, w;
    cin >> n >> e;
    vector<vector<int>> graph(n);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
    }

    vector<int> topoOrder = topologicalSort(graph);
    for (int node : topoOrder)
        cout << node << " ";

    return 0;
}