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

void dfs(int i, int j, vector<vector<char>> &graph, vector<vector<bool>> &visited, int row, int column)
{
    if (i < 0 || i >= row || j < 0 || j >= column)
        return;
    if (graph[i][j] == '0' || visited[i][j])
        return;

    // cout << i << " " << j << endl;
    visited[i][j] = true;

    dfs(i + 1, j, graph, visited, row, column);
    dfs(i, j + 1, graph, visited, row, column);
    dfs(i - 1, j, graph, visited, row, column);
    dfs(i, j - 1, graph, visited, row, column);

    dfs(i + 1, j + 1, graph, visited, row, column);
    dfs(i + 1, j - 1, graph, visited, row, column);
    dfs(i - 1, j + 1, graph, visited, row, column);
    dfs(i - 1, j - 1, graph, visited, row, column);
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

    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int island = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '0' || visited[i][j])
                continue;
            dfs(i, j, grid, visited, m, n);
            island++;
        }
    }

    cout << island << endl;

    return 0;
}