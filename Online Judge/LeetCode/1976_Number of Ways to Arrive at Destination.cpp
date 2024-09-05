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

int dijkstra(int src, int dst, vector<vector<pair<int, ll>>> &graph)
{
    vector<ll> times(graph.size(), LONG_MAX);
    vector<int> ways(graph.size(), 0);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> frontier;

    ways[src] = 1;
    times[src] = 0;
    frontier.push({0, src});

    while (!frontier.empty())
    {
        ll time = frontier.top().first;
        int vertex = frontier.top().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            ll adjacentTime = adjacent.second;

            if (time + adjacentTime < times[adjacentVertex])
            {
                times[adjacentVertex] = time + adjacentTime;
                frontier.push({times[adjacentVertex], adjacentVertex});
                ways[adjacentVertex] = ways[vertex];
            }
            else if (time + adjacentTime == times[adjacentVertex])
                ways[adjacentVertex] = (ways[adjacentVertex] + ways[vertex]) % MOD;
        }
    }
    return ways[dst];
}

int countPaths(int n, vector<vector<int>> &roads)
{
    vector<vector<pair<int, ll>>> graph(n);
    for (auto road : roads)
    {
        graph[road[0]].push_back({road[1], road[2]});
        graph[road[1]].push_back({road[0], road[2]});
    }

    return dijkstra(0, n - 1, graph);
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
    int u, v;

    vector<vector<int>> roads;

    for (int i = 0; i < m; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 3; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        roads.push_back(temp);
    }

    cout << countPaths(n, roads) << "\n";

    return 0;
}