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

ll watering(vll arr, ll mx)
{
    ll od, ev, ans, tmp;
    od = ev = ans = 0;
    fi(i, 0, arr.size())
    {
        if ((mx - arr[i]) % 2 != 0)
            od++;
        ev += (mx - arr[i]) / 2;
    }
    if (od > ev)
        ans = (od * 2) - 1;
    else
    {
        ev -= od;
        od += ((ev * 2) / 6) * 2;
        ans = od * 2;
        tmp = (ev * 2) % 6;
        if (tmp == 1)
            ans++;
        else if (tmp == 2 || tmp == 3)
            ans += 2;
        else if (tmp == 4)
            ans += 3;
        else if (tmp == 5)
            ans += 4;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll tmp, sum, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n), brr;
        mx = INT_MIN;
        fi(i, 0, n) cin >> arr[i], mx = max(mx, arr[i]);

        cout << min(watering(arr, mx), watering(arr, mx + 1)) << endl;
    }

    return 0;
}
