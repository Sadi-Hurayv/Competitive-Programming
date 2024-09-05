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

vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
{
    vector<vector<int>> graph(N);
    for (auto edge : edges)
    {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    return bfs(src, graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;

    for (int i = 0; i < m; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 2; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }

    int src;
    cin >> src;

    vector<int> distances = shortestPath(edges, n, m, src);

    for (int distance : distances)
        cout << distance << " ";

    return 0;
}