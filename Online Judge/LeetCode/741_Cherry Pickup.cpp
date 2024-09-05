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

int memoization(int r1, int c1, int r2, int c2, vector<vector<int>> &grid, vector<vector<vector<vector<int>>>> &memo)
{
    if (r1 < 0 || r2 < 0 || c1 < 0 || c2 < 0)
        return INT_MIN;
    if (grid[r1][c1] == -1 || grid[r2][c2] == -1)
        return INT_MIN;
    if (r1 == 0 && r2 == 0 && c1 == 0 && c2 == 0)
        return grid[0][0];

    if (memo[r1][c1][r2][c2] != -1)
        return memo[r1][c1][r2][c2];

    int currCherries;
    if (r1 == r2 && c1 == c2)
        currCherries = grid[r1][c1];
    else
        currCherries = grid[r1][c1] + grid[r2][c2];

    int maxCherries = INT_MIN;
    for (int i = 0, j = -1; i >= -1 && j <= 0; i--, j++)
        for (int k = 0, l = -1; k >= -1 && l <= 0; k--, l++)
            maxCherries = max(maxCherries, currCherries + memoization(r1 + i, c1 + j, r2 + k, c2 + l, grid, memo));

    // cout << r1 << " " << c1 << " " << r2 << " " << c2 << " " << currCherries << " " << maxCherries << endl;
    return memo[r1][c1][r2][c2] = maxCherries;
}

int iteration(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<vector<vector<int>>>> dp(m, vector<vector<vector<int>>>(n, vector<vector<int>>(m, vector<int>(n, INT_MIN))));
    for (int r1 = 0; r1 <= m - 1; r1++)
    {
        for (int r2 = 0; r2 <= m - 1; r2++)
        {
            for (int c1 = 0; c1 <= n - 1; c1++)
            {
                for (int c2 = 0; c2 <= n - 1; c2++)
                {
                    if (grid[r1][c1] == -1 || grid[r2][c2] == -1)
                        continue;
                    int currCherries;
                    if (r1 == r2 && c1 == c2)
                        currCherries = grid[r1][c1];
                    else
                        currCherries = grid[r1][c1] + grid[r2][c2];

                    if (r1 == 0 && c1 == 0 && r2 == 0 && c2 == 0)
                        dp[r1][c1][r2][c2] = currCherries;
                    else
                    {
                        int maxCherries = INT_MIN;
                        for (int i = 0, j = -1; i >= -1 && j <= 0; i--, j++)
                        {
                            int nr1 = r1 + i, nc1 = c1 + j;
                            for (int k = 0, l = -1; k >= -1 && l <= 0; k--, l++)
                            {
                                int nr2 = r2 + k, nc2 = c2 + l;
                                if (nr1 < 0 || nr2 < 0 || nc1 < 0 || nc2 < 0)
                                    continue;
                                if (grid[nr1][nc1] == -1 || grid[nr2][nc2] == -1)
                                    continue;
                                maxCherries = max(maxCherries, currCherries + dp[nr1][nc1][nr2][nc2]);
                            }
                        }
                        dp[r1][c1][r2][c2] = maxCherries;
                    }
                }
            }
        }
    }

    return dp[m - 1][n - 1][m - 1][n - 1];
}

int cherryPickup(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();

    // vector<vector<vector<vector<int>>>> memo(m, vector<vector<vector<int>>>(n, vector<vector<int>>(m, vector<int>(n, -1))));
    // return max(0, memoization(m - 1, n - 1, m - 1, n - 1, grid, memo));

    return max(0, iteration(m, n, grid));
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