#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int source, vector<vector<pair<int, int>>> &graph)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> frontier;
    vector<int> distances(graph.size(), INT_MAX);

    distances[source] = 0;
    frontier.push({distances[source], source});

    while (!frontier.empty())
    {
        int distance = frontier.top().first;
        int vertex = frontier.top().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distance + adjacentDistance < distances[adjacentVertex])
            {
                distances[adjacentVertex] = distance + adjacentDistance;
                frontier.push({distances[adjacentVertex], adjacentVertex});
            }
        }
    }
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
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
        // graph[v2].push_back({v1, w}); // for unditected graph
    }

    int source = 0;
    vector<int> distances = dijkstra(source, graph);

    for (auto dist : distances)
        cout << dist << " ";

    return 0;
}