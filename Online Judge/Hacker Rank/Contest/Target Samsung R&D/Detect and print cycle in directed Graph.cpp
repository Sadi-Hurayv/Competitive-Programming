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

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, vector<bool> &currentPath, vector<int> &path, vector<int> &minSumCycle, int &minSum)
{
    visited[vertex] = true;
    currentPath[vertex] = true;
    path.push_back(vertex);

    for (auto adjacent : graph[vertex])
    {
        if (currentPath[adjacent])
        {
            int sum = 0;
            vector<int> cycle;
            auto it = find(path.begin(), path.end(), adjacent);
            for (; it != path.end(); ++it)
            {
                cycle.push_back(*it);
                sum += *it;
            }

            if (sum < minSum)
            {
                minSum = sum;
                minSumCycle = cycle;
            }
        }
        else
        {
            dfs(adjacent, graph, visited, currentPath, path, minSumCycle, minSum);
        }
    }
    currentPath[vertex] = false;
    path.pop_back();
}

void detectAndPrintCycle(vector<vector<int>> &graph)
{
    int n = graph.size(), minSum = INT_MAX;
    vector<bool> visited(n + 1, false);
    vector<bool> currentPath(n + 1, false);
    vector<int> path, minSumCycle;

    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
            dfs(i, graph, visited, currentPath, path, minSumCycle, minSum);
    }
    sort(minSumCycle.begin(), minSumCycle.end());
    for (auto node : minSumCycle)
        cout << node << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, v1, v2;
    bool ok, flg;

    cin >> n >> m;
    vector<vector<int>> graph(n + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
    }

    detectAndPrintCycle(graph);

    return 0;
}