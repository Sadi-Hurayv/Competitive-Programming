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

int memoization(int n, vector<int> &heights, vector<int> &memo)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return abs(heights[2] - heights[1]);

    if (memo[n] != -1)
        return memo[n];

    return memo[n] = min((abs(heights[n] - heights[n - 1]) + memoization(n - 1, heights, memo)), (abs(heights[n] - heights[n - 2]) + memoization(n - 2, heights, memo)));
}

int tabulation(int n, vector<int> &heights)
{
    vector<int> dp(n + 2, -1);

    dp[1] = 0;
    dp[2] = abs(heights[2] - heights[1]);
    for (int i = 3; i <= n; i++)
        dp[i] = min((abs(heights[i] - heights[i - 1]) + dp[i - 1]), (abs(heights[i] - heights[i - 2]) + dp[i - 2]));

    return dp[n];
}

int frogJump(int n, vector<int> &heights)
{
    // vector<int> memo(n + 2, -1);
    // return memoization(n, heights, memo);

    return tabulation(n, heights);
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

    vector<int> heights(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> heights[i];

    cout << frogJump(n, heights) << endl;

    return 0;
}