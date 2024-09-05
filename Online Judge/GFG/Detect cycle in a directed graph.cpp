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

bool dfs(int vertex, vector<int> graph[], vector<bool> &visited, vector<bool> &currentPath)
{
    visited[vertex] = true;
    currentPath[vertex] = true;

    for (auto adjacent : graph[vertex])
    {
        if (visited[adjacent])
        {
            if (currentPath[adjacent])
                return true;
        }
        else
        {
            if (dfs(adjacent, graph, visited, currentPath))
                return true;
        }
    }
    currentPath[vertex] = false;
    
    return false;
}

bool isCyclic(int V, vector<int> graph[])
{
    vector<bool> visited(V + 1, false);
    vector<bool> currentPath(V + 1, false);

    for (int i = 0; i < V; i++)
    {
        if (visited[i])
            continue;

        if (dfs(i, graph, visited, currentPath))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<int> graph[n];
    vector<bool> visited(n, false);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        // graph[v2].push_back(v1);
    }

    if (isCyclic(n, graph))
        cout << "Cycle detected!\n";
    else
        cout << "Cycle not detected!\n";

    return 0;
}