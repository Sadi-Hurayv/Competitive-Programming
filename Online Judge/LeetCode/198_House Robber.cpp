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

int momoization(int n, vector<int> &money, vector<int> &memo)
{
    if (n < 0)
        return 0;
    if (memo[n] != -1)
        return memo[n];

    int pick = money[n] + momoization(n - 2, money, memo);
    int notPick = momoization(n - 1, money, memo);

    return memo[n] = max(pick, notPick);
}

int iteration(int n, vector<int> &money)
{
    vector<int> dp(n + 2, -1);
    dp[0] = money[0];
    if (n > 0)
        dp[1] = max(money[1], dp[0]);

    for (int i = 2; i <= n; i++)
        dp[i] = max((money[i] + dp[i - 2]), dp[i - 1]);

    return dp[n];
}

int rob(vector<int> &money)
{
    int n = money.size();
    vector<int> memo(n + 1, -1);
    return momoization(n - 1, money, memo);

    // return iteration(n - 1, money);
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
    vector<int> money(n);

    for (int i = 0; i < n; i++)
        cin >> money[i];

    cout << rob(money) << endl;

    return 0;
}