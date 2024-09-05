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
    // cout << grid[r][c] << endl;
    if (r == grid.size() - 1)
        return grid[r][c];

    if (memo[r][c] != INT_MIN)
        return memo[r][c];

    return memo[r][c] = grid[r][c] + min(memoization(r + 1, c, grid, memo), memoization(r + 1, c + 1, grid, memo));
}

int iteration(int m, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(m + 2, vector<int>(m + 2));

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == m - 1)
                dp[i][j] = grid[i][j];
            else
                dp[i][j] = grid[i][j] + min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    return dp[0][0];
}

int minimumPathSum(vector<vector<int>> &grid, int n)
{
    vector<vector<int>> memo(n, vector<int>(n, INT_MIN));
    return memoization(0, 0, grid, memo);

    // return iteration(n, grid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, temp;
    cin >> n;

    vector<vector<int>> grid(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> temp, grid[i].push_back(temp);

    cout << minimumPathSum(grid, n) << endl;

    return 0;
}