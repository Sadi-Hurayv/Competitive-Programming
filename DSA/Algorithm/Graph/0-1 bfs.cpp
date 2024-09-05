#include <bits/stdc++.h>
using namespace std;

void zeroOneBfs(int source, vector<vector<pair<int, int>>> &graph, vector<int> &distance)
{
    deque<int> frontier;

    distance[source] = 0;
    frontier.push_front(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop_front();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distance[vertex] + adjacentDistance < distance[adjacentVertex])
            {
                distance[adjacentVertex] = distance[vertex] + adjacentDistance;
                if (adjacentDistance == 0)
                    frontier.push_front(adjacentVertex);
                else
                    frontier.push_back(adjacentVertex);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long int n, e, v1, v2, w;
    cin >> n >> e;

    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
        graph[v2].push_back({v1, w});
    }

    int src = 0;
    vector<int> distance(n, INT_MAX);
    zeroOneBfs(src, graph, distance);

    for (auto dis : distance)
    {
        if (dis == INT_MAX)
            cout << "infinity or not connected\n";
        else
            cout << dis << endl;
    }

    return 0;
}