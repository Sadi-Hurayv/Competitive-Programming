#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int source, int destination, vector<vector<pair<int, int>>> &graph)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> frontier;
    vector<int> distances(graph.size(), INT_MAX);
    vector<int> parents(graph.size());

    for (int i = 0; i < graph.size(); i++)
        parents[i] = i;
    distances[source] = 0;
    frontier.push({distances[source], source});

    while (!frontier.empty())
    {
        int vertex = frontier.top().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distances[vertex] + adjacentDistance < distances[adjacentVertex])
            {
                distances[adjacentVertex] = distances[vertex] + adjacentDistance;
                frontier.push({distances[adjacentVertex], adjacentVertex});
                parents[adjacentVertex] = vertex;
            }
        }
    }

    cout << "source: " << source << endl;
    cout << "destination: " << destination << endl;
    cout << "distance: " << distances[destination] << endl;

    if (distances[destination] == INT_MAX)
        return {-1};

    vector<int> path;
    int node = destination;
    while (parents[node] != node)
    {
        path.push_back(node);
        node = parents[node];
    }
    path.push_back(source);
    reverse(path.begin(), path.end());

    return path;
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
        graph[v2].push_back({v1, w}); // for unditected graph
    }

    int source = 1;
    int destination = n;
    vector<int> path = dijkstra(source, destination, graph);

    cout << "path: ";
    for (auto node : path)
        cout << node << " ";

    return 0;
}