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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll l, r, xr, ans, ans2, ans3;
    bool ok, flg;

    ans = 1;
    cin >> l >> r;
    xr = l ^ r;
    // cout << xr << bitset<64>(xr) << endl;

    while (xr >= ans)
        ans *= 2;

    // ans2 = (1LL << 64 - (l == r) - __builtin_clzll(xr));

    // ans3 = xr;
    // ans3 |= ans3 >> 1;
    // ans3 |= ans3 >> 2;
    // ans3 |= ans3 >> 4;
    // ans3 |= ans3 >> 8;
    // ans3 |= ans3 >> 16;
    // ans3 |= ans3 >> 32;

    cout << ans - 1 << endl;
    // cout << ans2 - 1 << endl;
    // cout << ans3 << endl;

    return 0;
}