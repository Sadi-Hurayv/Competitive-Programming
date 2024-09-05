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

int memoization(int r, int c1, int c2, vector<vector<int>> &grid, vector<vector<vector<int>>> &memo)
{
    int m = grid.size();
    int n = grid[0].size();

    if (c1 < 0 || c1 > n - 1 || c2 < 0 || c2 > n - 1)
        return INT_MIN;

    int currCherries = 0;
    if (c1 == c2)
        currCherries = grid[r][c1];
    else
        currCherries = grid[r][c1] + grid[r][c2];

    if (r == m - 1)
        return currCherries;

    if (memo[r][c1][c2] != -1)
        return memo[r][c1][c2];

    int maxCherries = 0;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            maxCherries = max(maxCherries, currCherries + memoization(r + 1, c1 + i, c2 + j, grid, memo));

    return memo[r][c1][c2] = maxCherries;
}

int iteration(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<vector<int>>> dp(m + 2, vector<vector<int>>(n + 2, vector<int>(n + 2, 0)));
    for (int r = m - 1; r >= 0; r--)
    {
        for (int c1 = 0; c1 <= n - 1; c1++)
        {
            for (int c2 = 0; c2 <= n - 1; c2++)
            {
                // cout << r << " " << c1 << " " << c2 << endl;
                int currCherries = 0;
                if (c1 == c2)
                    currCherries = grid[r][c1];
                else
                    currCherries = grid[r][c1] + grid[r][c2];

                if (r == m - 1)
                    dp[r][c1][c2] = currCherries;
                else
                {
                    int maxCherries = 0;
                    for (int i = -1; i <= 1; i++)
                    {
                        int nc1 = c1 + i;
                        for (int j = -1; j <= 1; j++)
                        {
                            int nc2 = c2 + j;
                            if (nc1 < 0 || nc1 > n - 1 || nc2 < 0 || nc2 > n - 1)
                                continue;

                            maxCherries = max(maxCherries, currCherries + dp[r + 1][nc1][nc2]);
                        }
                    }
                    dp[r][c1][c2] = maxCherries;
                }
            }
        }
    }

    return dp[0][0][n - 1];
}

int cherryPickup(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();

    // vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(n, -1)));
    // return memoization(0, 0, n - 1, grid, memo);

    return iteration(m, n, grid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << cherryPickup(grid) << endl;

    return 0;
}