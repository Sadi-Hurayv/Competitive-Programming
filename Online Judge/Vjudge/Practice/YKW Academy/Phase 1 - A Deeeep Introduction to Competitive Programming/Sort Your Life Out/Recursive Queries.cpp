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

//________________________________________________________________________________________________________________\

ll arr[10][1000005];

ll f(ll i)
{
    if (i < 10)
        return i;
    else
    {
        ll ans = 1;
        while (i)
        {
            if (i % 10)
                ans *= i % 10;
            i /= 10;
        }
        return f(ans);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll l, r, k, tc;
    bool ok, flg;

    for (ll i = 1; i <= 1000000; i++)
        arr[f(i)][i] = 1;

    for (ll i = 1; i < 10; i++)
    {
        for (ll j = 1; j <= 1000000; j++)
            arr[i][j] += arr[i][j - 1];
    }

    cin >> tc;
    while (tc--)
    {
        cin >> l >> r >> k;
        cout << arr[k][r] - arr[k][l - 1] << endl;
    }

    return 0;
}