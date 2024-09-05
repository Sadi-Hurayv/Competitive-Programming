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

int dijkstra(int source, vector<vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    vector<int> times(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> frontier;

    times[source] = 0;
    frontier.push({times[source], source});

    while (!frontier.empty())
    {
        int time = frontier.top().first;
        int vertex = frontier.top().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentTime = adjacent.second;

            if (time + adjacentTime < times[adjacentVertex])
            {
                times[adjacentVertex] = time + adjacentTime;
                frontier.push({times[adjacentVertex], adjacentVertex});
            }
        }
    }

    int minTime = -1;
    for (int i=1; i<n; i++)
        minTime = max(minTime, times[i]);

    if (minTime == INT_MAX)
        return -1;
    else
        return minTime;
}

int networkDelayTime(vector<vector<int>> &routes, int n, int k)
{
    vector<vector<pair<int, int>>> graph(n + 1);

    for (auto route : routes)
        graph[route[0]].push_back({route[1], route[2]});

    return dijkstra(k, graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, e, k, v1, v2, w;
    cin >> n >> e;

    vector<vector<int>> routes(e);
    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> w;
        routes[i].push_back(v1);
        routes[i].push_back(v2);
        routes[i].push_back(w);
    }

    cin >> k;

    cout << networkDelayTime(routes, n, k);

    return 0;
}