#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = (a); i < (c); i++)
#define fd(i, a, c) for (ll i = (a); i > (c); i--)
#define fe(it, a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Tuple
#define tll tuple<ll, ll, ll>

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vpi vector<pi>
#define vpll vector<pll>
#define vtll vector<tll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions Related
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define mp make_pair
#define in insert
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(), a.end()

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define EPS 1e-6
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________________________________ \\

vector<int> bellman_ford(int n, vector<vector<int>> &edges, int src)
{
    vector<int> distances(n, 1e8);
    distances[src] = 0;

    // relax all edges n-1 times
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            if (distances[u] != 1e8 && distances[u] + w < distances[v])
                distances[v] = distances[u] + w;
        }
    }

    // check for negative-weights cycles
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        if (distances[u] != 1e8 && distances[u] + w < distances[v])
            return {-1};
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

    vector<int> distances = bellman_ford(n, edges, src);

    for (auto dist : distances)
        cout << dist << " ";
    cout << endl;

    return 0;
}