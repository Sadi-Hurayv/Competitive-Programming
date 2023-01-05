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

    ll a, b, c, k, n, m, p, q, x, y, z, l1, l2, r1, r2, tmp;
    char ch;
    string sen, ten;
    bool ok, flg;

    cin >> n >> m >> q;

    bitset<4010> arr[n + 1];
    fi(i, 1, n + 1)
    {
        cin >> tmp;
        arr[i] = arr[i - 1];
        arr[i][tmp].flip();
    }

    bitset<4010> brr[m + 1];
    fi(i, 1, m + 1)
    {
        cin >> tmp;
        brr[i] = brr[i - 1];
        brr[i][tmp].flip();
    }

    while (q--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        cout << ((arr[l1-1] ^ arr[r1]) ^ (brr[l2-1] ^ brr[r2])).count() << endl;
    }

    return 0;
}