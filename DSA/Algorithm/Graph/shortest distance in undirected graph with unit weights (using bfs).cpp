#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int source, vector<vector<int>> &graph)
{
    vector<int> distances(graph.size(), INT_MAX);
    queue<pair<int, int>> frontier;

    distances[source] = 0;
    frontier.push({source, distances[source]});

    while (!frontier.empty())
    {
        int vertex = frontier.front().first;
        int distance = frontier.front().second;
        frontier.pop();
        // cout << vertex << endl;

        for (auto adjacent : graph[vertex])
        {

            if (distance + 1 < distances[adjacent])
            {
                distances[adjacent] = distance + 1;
                frontier.push({adjacent, distance + 1});
            }
        }
    }

    for (int i = 0; i < graph.size(); i++)
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

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<vector<int>> graph(n);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    vector<int> distances = bfs(0, graph);
    for (int distance : distances)
        cout << distance << " ";

    return 0;
}