#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void bellmanFord(int n, vector<vector<int>> &edges, int src)
{
    vector<int> distances(n + 1, INT_MAX);
    distances[src] = 0;

    // relax all edges n-1 times
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            if (distances[u] != INT_MAX && distances[u] + w < distances[v])
                distances[v] = distances[u] + w;
        }
    }

    // check for negative-weights cycles
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        if (distances[u] != INT_MAX && distances[u] + w < distances[v])
        {
            cout << "Graph contains a negative weight cycle" << endl;
            return;
        }
    }

    // print distances from source
    cout << "Distances from source" << endl;
    for (int i = 0; i < n; i++)
    {
        if (distances[i] == INT_MAX)
            cout << i << "\t" << "INF" << endl;
        else
            cout << i << "\t" << distances[i] << endl;
    }
    cout << "\n";
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

    ll k, n, m, tc;

    cin >> n >> m;
    vector<vector<int>> edges;

    for (int i = 0; i < m; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 3; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }

    int src;
    cin >> src;

    bellmanFord(n, edges, src);

    return 0;
}