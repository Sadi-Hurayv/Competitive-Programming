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

// this function implies that what is the maximum happiness we can get 
// from day '0' till day 'day' given that previous day 'lastActivity' happened.
int memoization(int day, int lastActivity, vector<vector<int>> &happiness, vector<vector<int>> &memo)
{
    if (day < 0)
        return 0;

    if (memo[day][lastActivity] != -1)
        return memo[day][lastActivity];

    int maxHappiness = -1;
    for (int activity = 0; activity < 3; activity++)
        if (activity != lastActivity)
            maxHappiness = max(maxHappiness, happiness[day][activity] + memoization(day - 1, activity, happiness, memo));

    return memo[day][lastActivity] = maxHappiness;
}

int iteration(int n, vector<vector<int>> &happiness)
{
    vector<vector<int>> dp(n + 2, vector<int>(4, -1));

    dp[0][0] = max(happiness[0][1], happiness[0][2]);
    dp[0][1] = max(happiness[0][0], happiness[0][2]);
    dp[0][2] = max(happiness[0][0], happiness[0][1]);
    dp[0][3] = max(happiness[0][0], max(happiness[0][1], happiness[0][2]));

    for (int day = 1; day < n; day++)
    {
        for (int lastActivity = 0; lastActivity < 4; lastActivity++)
        {
            int maxHappiness = -1;
            for (int activity = 0; activity < 3; activity++)
            {
                if (activity != lastActivity)
                {
                    maxHappiness = max(maxHappiness, happiness[day][activity] + dp[day - 1][activity]);
                }
            }
            dp[day][lastActivity] = maxHappiness;
        }
    }

    return dp[n - 1][3];
}

int vacation(int n, vector<vector<int>> &happiness)
{
    // vector<vector<int>> memo(n, vector<int>(4, -1));
    // return memoization(n - 1, 3, happiness, memo);

    return iteration(n, happiness);
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

    vector<vector<int>> happiness(n, vector<int>(3));
    for (int i = 0; i < n; i++)
        cin >> happiness[i][0] >> happiness[i][1] >> happiness[i][2];

    cout << vacation(n, happiness);

    return 0;
}