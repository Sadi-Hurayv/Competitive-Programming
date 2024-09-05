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

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[vertex] = true;

    for (int i = 0; i < graph[vertex].size(); i++)
    {
        // if (graph[vertex][i] == 0 || vertex == i || visited[i])
        //     continue;
        // dfs(i, graph, visited);

        if (graph[vertex][i] == 1 && !visited[i])
            dfs(i, graph, visited);
    }
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
    bool ok, flg;

    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    // we can also convert adjacency matrix to adjaceny list and
    // do the dfs normally for adjacency list.
    // Somehow in leetcode working with adjacency list got low runtime
    // We can also solve the problem using Union Find.
    // Thats the next goal.
    vector<bool> visited(n);
    int numberOfProvinces = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        dfs(i, graph, visited);
        numberOfProvinces++;
    }
    cout << numberOfProvinces << endl;

    return 0;
}