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

bool dfs(int r, int c, vector<vector<int>> &grid, vector<vector<bool>> &visited, int l)
{
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size())
        return false;
    if (visited[r][c] || (0 == grid[r][c]))
        return false;
    if (3 == grid[r][c])
        return true;

    visited[r][c] = true;

    int dh = 1, dv = l;
    if (dfs(r, c + dh, grid, visited, l) || dfs(r, c - dh, grid, visited, l))
        return true;
    
    for(int dv=1; dv<=l; dv++)
        if(dfs(r + dv, c, grid, visited, l) || dfs(r - dv, c, grid, visited, l))
            return true;

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

    ll m, n;
    bool ok, flg;

    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    for (int l = 0; l <= 10; l++)
    {
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        if (dfs(m - 1, 0, grid, visited, l))
        {
            cout << l << endl;
            break;
        }
    }

    return 0;
}