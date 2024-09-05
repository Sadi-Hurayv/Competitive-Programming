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

vector<int> delrow = {-1, 0, 0, 1};
vector<int> delcol = {0, -1, 1, 0};

void dfs(int r, int c, vector<vector<int>> &grid)
{
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size())
        return;
    if (grid[r][c] != 1)
        return;

    grid[r][c] = 0;

    for (int i = 0; i < 4; i++)
    {
        int nrow = delrow[i] + r;
        int ncol = delcol[i] + c;
        dfs(nrow, ncol, grid);
    }
}

int numberOfEnclaves(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        dfs(i, 0, grid);
        dfs(i, grid[0].size() - 1, grid);
    }

    for (int i = 0; i < grid[0].size(); i++)
    {
        dfs(0, i, grid);
        dfs(grid.size() - 1, i, grid);
    }

    int enclaves = 0;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[0].size(); j++)
            if (grid[i][j] == 1)
                enclaves++;

    return enclaves;
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
    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << numberOfEnclaves(grid) << endl;

    return 0;
}