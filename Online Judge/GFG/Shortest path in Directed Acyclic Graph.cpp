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

void dfs(int vertex, vector<vector<pair<int, int>>> &graph, vector<bool> &visited, stack<int> &topoStack)
{
    visited[vertex] = true;
    for (auto adjacent : graph[vertex])
    {
        int adjacentVertex = adjacent.first;
        if (!visited[adjacentVertex])
            dfs(adjacentVertex, graph, visited, topoStack);
    }
    topoStack.push(vertex);
}

vector<int> topologicalSort(int source, vector<vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    stack<int> topoStack;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i, graph, visited, topoStack);
    }

    vector<int> distances(n, 1e9);
    distances[source] = 0;
    while (!topoStack.empty())
    {
        int vertex = topoStack.top();
        topoStack.pop();

        for (auto adjacent : graph[vertex])
        {
            int adjacentVertex = adjacent.first;
            int adjacentDistance = adjacent.second;

            if (distances[vertex] + adjacentDistance < distances[adjacentVertex])
                distances[adjacentVertex] = distances[vertex] + adjacentDistance;
        }
    }

    for (int i = 0; i < n; i++)
        if (distances[i] == 1e9)
            distances[i] = -1;
    return distances;
}

vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
{
    vector<vector<pair<int, int>>> graph(N);
    for (auto edge : edges)
        graph[edge[0]].push_back({edge[1], edge[2]});

    return topologicalSort(0, graph);
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
        for (int j = 0; j < 3; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }

    vector<int> distances = shortestPath(n, m, edges);
    for (int distance : distances)
        cout << distance << " ";

    return 0;
}