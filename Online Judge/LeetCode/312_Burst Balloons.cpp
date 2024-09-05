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

int memoization(int start, int end, vector<int> &ballons, vector<vector<int>> &memo)
{
    if (start > end)
        return 0;

    if (memo[start][end] != -1)
        return memo[start][end];

    int maximumCoins = INT_MIN;
    int coins;
    for (int i = start; i <= end; i++)
    {
        coins = (ballons[start - 1] * ballons[i] * ballons[end + 1]) + memoization(start, i - 1, ballons, memo) + memoization(i + 1, end, ballons, memo);
        maximumCoins = max(maximumCoins, coins);
    }

    return memo[start][end] = maximumCoins;
}

int tabulation(vector<int> &ballons, int n)
{
    vector<vector<int>> dp(n + 3, vector<int>(n + 3, 0));
    for (int start = n; start >= 1; start--)
    {
        for (int end = 1; end <= n; end++)
        {
            if (start > end)
                continue;

            int maximumCoins = INT_MIN;
            for (int i = start; i <= end; i++)
            {
                int coins = (ballons[start - 1] * ballons[i] * ballons[end + 1]) + dp[start][i - 1] + dp[i + 1][end];
                maximumCoins = max(maximumCoins, coins);
            }

            dp[start][end] = maximumCoins;
        }
    }
    return dp[1][n];
}

int maxCoins(vector<int> &ballons)
{
    int n = ballons.size();

    ballons.insert(ballons.begin(), 1);
    ballons.push_back(1);

    // memoization
    // vector<vector<int>> memo(n + 2, vector<int>(n + 2, -1));
    // return memoization(1, n, ballons, memo);

    // tabulation
    return tabulation(ballons, n);
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
    vector<int> balloons(n);

    for (int i = 0; i < n; i++)
        cin >> balloons[i];

    cout << maxCoins(balloons) << endl;

    return 0;
}