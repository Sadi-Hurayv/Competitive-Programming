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

int memoization(int r, int c, vector<vector<int>> &grid, vector<vector<int>> &memo)
{
    int m = grid.size();
    int n = grid[0].size();

    if (r == m - 1)
        return grid[r][c];

    if (memo[r][c] != INT_MIN)
        return memo[r][c];

    int sum = 0;
    if (n - 1 == 0)
        sum = grid[r][c] + memoization(r + 1, c, grid, memo);
    else if (c == 0)
        sum = grid[r][c] + max(memoization(r + 1, c, grid, memo), memoization(r + 1, c + 1, grid, memo));
    else if (c == n - 1)
        sum = grid[r][c] + max(memoization(r + 1, c - 1, grid, memo), memoization(r + 1, c, grid, memo));
    else
        sum = grid[r][c] + max(memoization(r + 1, c - 1, grid, memo), max(memoization(r + 1, c, grid, memo), memoization(r + 1, c + 1, grid, memo)));

    return memo[r][c] = sum;
}

void iteration(int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    // vector<vector<int>> dp(n + 2, vector<int>(n + 2));
    for (int r = m - 1; r >= 0; r--)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == m - 1)
                dp[r][c] = grid[r][c];
            else if (n - 1 == 0)
                dp[r][c] = grid[r][c] + dp[r + 1][c];
            else if (c == 0)
                dp[r][c] = grid[r][c] + max(dp[r + 1][c], dp[r + 1][c + 1]);
            else if (c == n - 1)
                dp[r][c] = grid[r][c] + max(dp[r + 1][c - 1], dp[r + 1][c]);
            else
                dp[r][c] = grid[r][c] + max(dp[r + 1][c - 1], max(dp[r + 1][c], dp[r + 1][c + 1]));
        }
    }
}

int getMaxPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int maxSum = INT_MIN;

    // vector<vector<int>> memo(m + 1, vector<int>(n + 1, INT_MIN));
    // for (int i = 0; i < n; i++)
    //     maxSum = max(maxSum, memoization(0, i, grid, memo));

    vector<vector<int>> dp(m + 2, vector<int>(n + 2));
    iteration(m, n, grid, dp);
    for (int i = 0; i < n; i++)
        maxSum = max(maxSum, dp[0][i]);

    return maxSum;
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

    cout << getMaxPathSum(grid) << endl;

    return 0;
}