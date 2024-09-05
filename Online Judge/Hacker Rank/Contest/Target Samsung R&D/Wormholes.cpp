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

struct Point
{
    int x, y;
};

struct Wormhole
{
    Point start, end;
    int cost;
};

int distance(Point source, Point destination)
{
    return abs(source.x - destination.x) + abs(source.y - destination.y);
}

vector<vector<int>> buildGraph(Point source, Point destination, vector<Wormhole> &wormholes, int n)
{
    int totalPoints = 2 + 2 * n;
    vector<vector<int>> graph(totalPoints, vector<int>(totalPoints));

    graph[0][1] = graph[1][0] = distance(source, destination);

    for (int i = 0; i < n; i++)
    {
        graph[0][2 + i * 2] = graph[2 + i * 2][0] = distance(source, wormholes[i].start);
        graph[0][3 + i * 2] = graph[3 + i * 2][0] = distance(source, wormholes[i].end);

        graph[1][2 + i * 2] = graph[2 + i * 2][1] = distance(destination, wormholes[i].start);
        graph[1][3 + i * 2] = graph[3 + i * 2][1] = distance(destination, wormholes[i].end);

        graph[2 + i * 2][3 + i * 2] = graph[3 + i * 2][2 + i * 2] = min(wormholes[i].cost, distance(wormholes[i].start, wormholes[i].end));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            graph[2 + i * 2][2 + j * 2] = graph[2 + j * 2][2 + i * 2] = distance(wormholes[i].start, wormholes[j].start);
            graph[2 + i * 2][3 + j * 2] = graph[3 + j * 2][2 + i * 2] = distance(wormholes[i].start, wormholes[j].end);

            graph[3 + i * 2][2 + j * 2] = graph[2 + j * 2][3 + i * 2] = distance(wormholes[i].end, wormholes[j].start);
            graph[3 + i * 2][3 + j * 2] = graph[3 + j * 2][3 + i * 2] = distance(wormholes[i].end, wormholes[j].end);
        }
    }

    return graph;
}

int dijkstra(int source, int destination, vector<vector<int>> &graph, int n)
{
    int totalPoints = 2 + 2 * n;
    vector<int> costs(totalPoints, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> frontier;

    costs[source] = 0;
    frontier.push({costs[source], source});

    while (!frontier.empty())
    {
        int cost = frontier.top().first;
        int vertex = frontier.top().second;
        frontier.pop();

        for (int adjacent = 0; adjacent < totalPoints; adjacent++)
        {
            int adjacentCost = graph[vertex][adjacent];

            if (cost + adjacentCost < costs[adjacent])
            {
                costs[adjacent] = cost + adjacentCost;
                frontier.push({costs[adjacent], adjacent});
            }
        }
    }

    return costs[destination];
}

int minumumCost(Point source, Point destination, vector<Wormhole> &wormholes, int n)
{
    vector<vector<int>> graph = buildGraph(source, destination, wormholes, n);
    return dijkstra(0, 1, graph, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, tc;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        Point source, destination;
        vector<Wormhole> wormholes(n);

        cin >> source.x >> source.y >> destination.x >> destination.y;
        for (int i = 0; i < n; i++)
            cin >> wormholes[i].start.x >> wormholes[i].start.y >> wormholes[i].end.x >> wormholes[i].end.y >> wormholes[i].cost;

        cout << minumumCost(source, destination, wormholes, n) << endl;
    }

    return 0;
}