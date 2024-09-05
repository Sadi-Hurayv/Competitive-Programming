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

vector<int> dijkstra(int source, int destination, vector<vector<pair<int, int>>> &graph)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> frontier;
    vector<int> distances(graph.size(), INT_MAX);
    vector<int> parents(graph.size());

    for (int i = 0; i < graph.size(); i++)
        parents[i] = i;
    distances[source] = 0;
    frontier.push({distances[source], source});

    while (!frontier.empty())
    {
        int vertex = frontier.top().second;
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distances[vertex] + adjacentDistance < distances[adjacentVertex])
            {
                distances[adjacentVertex] = distances[vertex] + adjacentDistance;
                frontier.push({distances[adjacentVertex], adjacentVertex});
                parents[adjacentVertex] = vertex;
            }
        }
    }

    if (distances[destination] == INT_MAX)
        return {-1};

    vector<int> path;
    int node = destination;
    while (parents[node] != node)
    {
        path.push_back(node);
        node = parents[node];
    }
    path.push_back(source);
    path.push_back(distances[destination]);  // as per problem wanted

    reverse(path.begin(), path.end());
    return path;
}

vector<int> shortestPath(int n, int m, vector<vector<int>> &edges)
{
    vector<vector<pair<int, int>>> graph(n + 1);

    for(auto edge : edges)
    {
        graph[edge[0]].push_back({edge[1], edge[2]});
        graph[edge[1]].push_back({edge[0], edge[2]});
    }

    int source = 1;
    int destination = n;
    return dijkstra(source, destination, graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2, w;

    cin >> n >> e;
    vector<vector<int>> edges(n + 1);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> w;
        edges[i].push_back(v1);
        edges[i].push_back(v2);
        edges[i].push_back(w);
    }

    vector<int> ans = shortestPath(n, e, edges);

    for (auto it : ans)
        cout << it << " ";

    return 0;
}