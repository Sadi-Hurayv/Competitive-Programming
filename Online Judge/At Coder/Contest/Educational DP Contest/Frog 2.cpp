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

int memoization(int n, int k, vector<int> &heights, vector<int> &memo)
{
    if (n == 1)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    int cost = INT_MAX;

    for (int i = 1; i <= k; i++)
    {
        if (n - i >= 1)
            cost = min(cost, abs(heights[n] - heights[n - i]) + memoization(n - i, k, heights, memo));
    }

    return memo[n] = cost;
}

int tabulation(int n, int k, vector<int> &heights)
{
    vector<int> dp(n + 2, -1);

    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int cost = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 1)
                cost = min(cost, (abs(heights[i] - heights[i - j]) + dp[i - j]));
        }

        dp[i] = cost;
    }

    return dp[n];
}
    
int frogJump(int n, int k, vector<int> &heights)
{
    // vector<int> memo(n + 2, -1);
    // return memoization(n, k, heights, memo);

    return tabulation(n, k, heights);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, k;
    cin >> n >> k;

    vector<int> heights(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> heights[i];

    cout << frogJump(n, k, heights) << endl;

    return 0;
}