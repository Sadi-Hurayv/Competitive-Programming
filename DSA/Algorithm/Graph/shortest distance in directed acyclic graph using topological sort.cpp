#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<pair<int, int>>> &graph, vector<bool> &visited, stack<int> &topoStack)
{
    visited[vertex] = true;
    for (auto adjacent : graph[vertex])
    {
        int adjacentVertex = adjacent.first;
        if (!visited[adjacentVertex])
            dfs(adjacentVertex, graph, visited, topoStack);
    }
    topoStack.push(vertex);
}

vector<long long int> topologicalSort(int source, vector<vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    stack<int> topoStack;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i, graph, visited, topoStack);
    }

    vector<long long> distances(n, INT_MAX);
    distances[source] = 0;
    while (!topoStack.empty())
    {
        int vertex = topoStack.top();
        topoStack.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distances[vertex] + adjacentDistance < distances[adjacentVertex])
                distances[adjacentVertex] = distances[vertex] + adjacentDistance;
        }
    }

    for (int i = 0; i < n; i++)
        if (distances[i] == INT_MAX)
            distances[i] = -1;
    return distances;
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
    vector<vector<pair<int, int>>> graph(n);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
    }

    vector<long long int> distances = topologicalSort(0, graph);
    for (int distance : distances)
        cout << distance << " ";

    return 0;
}