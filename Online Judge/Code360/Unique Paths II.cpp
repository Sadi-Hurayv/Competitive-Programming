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

int mod = (int)(1e9 + 7);
int memoization(int m, int n, vector<vector<int>> &grid, vector<vector<int>> &memo)
{
    if (m < 0 || n < 0 || grid[m][n] == -1)
        return 0;
    if (m == 0 && n == 0)
        return 1;

    if (memo[m][n] != -1)
        return memo[m][n];

    return memo[m][n] = (memoization(m - 1, n, grid, memo) % mod + memoization(m, n - 1, grid, memo) % mod) % mod;
}

int iteration(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(m + 2, vector<int>(n + 2, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == -1)
                dp[i][j] = 0;
            else if (i == 0 && j == 0)
                dp[i][j] = 1;
            else if (i == 0)
                dp[i][j] = dp[i][j - 1];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }

    return dp[m - 1][n - 1];
}

int mazeObstacles(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<int>> memo(m, vector<int>(n, -1));
    return memoization(m - 1, n - 1, grid, memo);

    // return iteration(m, n, grid);
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

    cout << mazeObstacles(m, n, grid) << endl;

    return 0;
}