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

const ll N = 1e5 + 10;
vll arr(N);

void merge_sort(ll l, ll r)
{
    if (l >= r)
        return;

    ll mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    vll left, right;
    fi(i, l, mid + 1) left.push_back(arr[i]);
    fi(i, mid + 1, r + 1) right.push_back(arr[i]);

    ll i, j, k;
    i = j = 0;
    k = l;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < left.size())
        arr[k++] = left[i++];

    while (j < right.size())
        arr[k++] = right[j++];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a, b, c, k, n, m, p, q, x, y, z, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, num, sum, rem, typ, pos, pre, cur, nxt, len, ans, fnd, low, mid, high;
    char ch;
    string sen, ten;
    bool ok, flg;

    n = 0;
    while (cin >> x)
        arr[n++] = x;

    merge_sort(0, n - 1);
    fi(i, 0, n) cout << arr[i] << " ";

    return 0;
}