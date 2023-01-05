#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
#define fa(it, a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define in insert

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define PINF 1e18
#define NINF -1e18
//________________________________________________________________________________________//

bool check(ll a, ll b, ll c, ll d, ll k, ll t)
{
    // F(t)=A(t^3)+B(t^2)+C*(t)+D, F(t)<=10^18
    ll eqa = 0, tmp;
    eqa = (a * t * t * t) + (b * t * t) + (c * t) + d;
    if (eqa <= k)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, h, q, k, a, b, c, d, l, r, x, y, tc, mx, mn, ev, od, fi, lb, ub;
    ll tmp, sum, typ, pos, ans, num, low, mid, high, left, right;
    bool ok, flg;
    string sen, name;

    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c >> d >> k;

        // To find-out the max possible value of "t"!!!

        // ll t = 1e6; //t^3 will be 1e18. So actual valie will be less than 1e6.
        // while (1)
        // {
        //     if ((2 * t * t * t) + (2 * t * t) + (2 * t) + 2 <= PINF)
        //     {
        //         cout << t << "\n";
        //         break;
        //     }
        //     t--;
        // }
        low = 0, high = 8e5, ans = 0;
        while (high >= low)
        {
            mid = low + (high - low) / 2;
            ok = check(a, b, c, d, k, mid);
            if (ok)
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
