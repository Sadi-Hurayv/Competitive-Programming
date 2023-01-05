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
#define tlll tuple<ll, ll, ll>

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vtlll vector<tlll>
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

//________________________________________________________________________________________//

ll n, k;
vll arr;
bool good(double x)
{
    ll sum = 0;
    fi(i, 0, n) sum += (1.0 * arr[i]) / x;
    return sum >= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, rem, typ, pos, len, ans, num, fnd;
    bool ok, flg;
    string sen;

    cin >> n >> k;
    arr.resize(n);
    fi(i, 0, n) cin >> arr[i];

    double low, mid, high;

    low = 0;
    high = 1e8;

    fi(i, 0, 101)
    {
        mid = low + (high - low) / 2;
        if (good(mid))
            low = mid;
        else
            high = mid;
    }

    cout << fixed << setprecision(6) << low << endl;

    return 0;
}
