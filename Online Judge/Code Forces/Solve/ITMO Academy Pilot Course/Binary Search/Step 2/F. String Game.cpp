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

//________________________________________________________________________________________________________________\\

string tsen, psen;
vll arr;
bool good(ll n)
{
    vll brr;
    brr.assign(arr.begin(), arr.begin() + n);
    sort(all(brr));

    ll i = 0, j = 0, k = 0;
    for (; i < tsen.length() && j < psen.length(); i++)
    {
        if ((k < n) && (i == brr[k] - 1))
        {
            k++;
            continue;
        }
        if (tsen[i] == psen[j])
            j++;
    }

    return j == psen.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    string sen;
    char ch;
    bool ok, flg;

    cin >> tsen >> psen;
    n = tsen.length();
    arr.resize(n);
    fi(i, 0, n) cin >> arr[i];

    low = 0;            // good 1
    high = tsen.size(); // bad 0
    while (high > low + 1)
    {
        mid = low + (high - low) / 2;
        if (good(mid)) // mid<=target
            low = mid;
        else
            high = mid;
    }
    cout << low << endl;

    return 0;
}
