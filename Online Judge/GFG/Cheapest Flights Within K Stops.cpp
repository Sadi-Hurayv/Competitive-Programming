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

int dijkstra(vector<vector<pair<int, int>>> &graph, int src, int dst, int k)
{
    vector<int> prices(graph.size(), INT_MAX);
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> frontier;

    prices[src] = 0;
    frontier.push({0, {prices[src], src}});

    while (!frontier.empty())
    {
        int stops = frontier.top().first;
        int price = frontier.top().second.first;
        int vertex = frontier.top().second.second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentPrice = adjacent.second;

            if (stops > k)
                continue;

            if (price + adjacentPrice < prices[adjacentVertex])
            {
                prices[adjacentVertex] = price + adjacentPrice;
                frontier.push({stops + 1, {prices[adjacentVertex], adjacentVertex}});
            }
        }
    }
    if (prices[dst] == INT_MAX)
        return -1;
    else
        return prices[dst];
}

int CheapestFLight(int n, vector<vector<int>> &flights, int src, int dst, int k)
{
    vector<vector<pair<int, int>>> graph(n + 1);
    for (auto flight : flights)
        graph[flight[0]].push_back({flight[1], flight[2]});

    return dijkstra(graph, src, dst, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n;
    cin >> n;
    int edge;
    cin >> edge;
    vector<vector<int>> flights;

    for (int i = 0; i < edge; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 3; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        flights.push_back(temp);
    }

    int src, dst, k;
    cin >> src >> dst >> k;

    cout << CheapestFLight(n, flights, src, dst, k);

    return 0;
}