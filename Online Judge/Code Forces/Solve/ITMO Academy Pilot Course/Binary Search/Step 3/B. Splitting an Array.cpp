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

//________________________________________________________________________________________________________________\\

bool check(vll &arr, ll k, ll tarSum)
{
    fi(i, 0, arr.size())
    {
        if (arr[i] > tarSum)
            return false;
    }

    ll sum = 0, cnt = 1;
    fi(i, 0, arr.size())
    {
        sum += arr[i];
        if (sum > tarSum)
        {
            cnt++;
            sum = arr[i];
        }
    }

    return cnt <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, k, a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    char ch;
    string sen;
    bool ok, flg;

    cin >> n >> k;
    vll arr(n);
    sum = 0;
    fi(i, 0, n) cin >> arr[i], sum += arr[i];

    low = 0;    // good 0
    high = sum; // bad 1

    while (high > low + 1)
    {
        mid = low + (high - low) / 2;
        if (check(arr, k, mid))
            high = mid;
        else
            low = mid;
    }

    // cout << low << endl;
    cout << high << endl;

    return 0;
}