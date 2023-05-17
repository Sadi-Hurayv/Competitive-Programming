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


ll merge(vector<ll> &left, ll ln, vector<ll> &right, ll rn, vector<ll> &arr)
{
    ll inv_count = 0;

    ll i, j, k;
    i = j = k = 0;

    while (i < ln && j < rn)
    {
        if (left[i] <= right[j])
            arr[k] = left[i], i++, k++;
        else
            arr[k] = right[j], j++, k++, inv_count += ln - i;
    }

    while (i < ln)
        arr[k] = left[i], i++, k++;

    while (j < rn)
        arr[k] = right[j], j++, k++;

    return inv_count;
}

ll merge_sort(vector<ll> &arr, ll n)
{
    if (n < 2)
        return 0;

    ll mid = n / 2;
    vector<ll> left(mid), right(n - mid);
    for (ll i = 0; i < mid; i++)
        left[i] = arr[i];
    for (ll i = mid; i < n; i++)
        right[i - mid] = arr[i];

    ll inv_count = 0;
    inv_count += merge_sort(left, mid);
    inv_count += merge_sort(right, n - mid);
    inv_count += merge(left, mid, right, n - mid, arr);

    return inv_count;
}

ll inversion_count(vector<ll> &arr, ll n)
{
    return merge_sort(arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, m, tc;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n);
        fi(i, 0, n) cin >> arr[i];
        cout << inversion_count(arr, n) << endl;
    }

    return 0;
}