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
    if (r == grid.size() - 1)
        return grid[r][c];

    if (memo[r][c] != INT_MIN)
        return memo[r][c];

    int sum = 0;
    if (c == 0)
        sum = grid[r][c] + min(memoization(r + 1, c, grid, memo), memoization(r + 1, c + 1, grid, memo));
    else if (c == grid[r].size() - 1)
        sum = grid[r][c] + min(memoization(r + 1, c - 1, grid, memo), memoization(r + 1, c, grid, memo));
    else
        sum = grid[r][c] + min(memoization(r + 1, c - 1, grid, memo), min(memoization(r + 1, c, grid, memo), memoization(r + 1, c + 1, grid, memo)));

    return memo[r][c] = sum;
}

void iteration(int n, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    // vector<vector<int>> dp(n + 2, vector<int>(n + 2));
    for (int r = n - 1; r >= 0; r--)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == n - 1)
                dp[r][c] = grid[r][c];
            else if (c == 0)
                dp[r][c] = grid[r][c] + min(dp[r + 1][c], dp[r + 1][c + 1]);
            else if (c == n - 1)
                dp[r][c] = grid[r][c] + min(dp[r + 1][c - 1], dp[r + 1][c]);
            else
                dp[r][c] = grid[r][c] + min(dp[r + 1][c - 1], min(dp[r + 1][c], dp[r + 1][c + 1]));
        }
    }
}

int minFallingPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int minSum = INT_MAX;

    vector<vector<int>> memo(n + 1, vector<int>(n + 1, INT_MIN));
    for (int i = 0; i < n; i++)
        minSum = min(minSum, memoization(0, i, grid, memo));

    // vector<vector<int>> dp(n + 2, vector<int>(n + 2));
    // iteration(n, grid, dp);
    // for (int i = 0; i < n; i++)
    //     minSum = min(minSum, dp[0][i]);

    return minSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << minFallingPathSum(grid) << endl;

    return 0;
}