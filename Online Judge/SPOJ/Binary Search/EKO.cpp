#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
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
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________//

bool check(vll &arr, ll m, ll h)
{
    ll sum = 0;
    fi(i, 0, arr.size()) sum += ((arr[i] - h) > 0 ? arr[i] - h : 0);
    // cout << sum << endl;
    return sum >= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, tc, mx, mn, ev, od;
    ll tmp, sum, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    cin >> n >> m;
    vll arr(n);
    mx = INT_MIN;
    fi(i, 0, n) cin >> arr[i], mx = max(mx, arr[i]);

    low = 0, high = mx;
    ans = 0;
    while (high > low)
    {
        mid = low + (high - low + 1) / 2;
        if (check(arr, m, mid))
            low = mid, ans = low;
        else
            high = mid - 1;
    }

    cout << ans << endl;
    //cout << low << " " << high << endl;

    return 0;
}
