#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void floydWarshall(int n, vector<vector<int>> &graph)
{
    vector<vector<int>> distances = graph;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                distances[i][j] = 0;
            if (distances[i][j] == -1)
                distances[i][j] = INT_MAX;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (distances[i][k] != INT_MAX && distances[k][j] != INT_MAX && distances[i][k] + distances[k][j] < distances[i][j])
                    distances[i][j] = distances[i][k] + distances[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (distances[i][i] < 0)
        {
            cout << "Graph contains a negative weight cycle\n";
            return;
        }
    }

    // print distances
    cout << "Distances from source" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (distances[i][j] == INT_MAX)
                cout << "INF\t";
            else
                cout << distances[i][j] << "\t";
        }
        cout << endl;
    }

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

    ll n;
    cin >> n;

    // if there is no edge then it is -1 and self distance is 0
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    floydWarshall(n, graph);

    return 0;
}