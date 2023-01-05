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

    ll a, b, c, k, n, m, x, y, z, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, num, sum, rem, typ, pos, pre, cur, nxt, len, ans, fnd, low, mid, high;
    char ch;
    string sen, ten;
    ll x1, x2, p1, p2;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> x1 >> p1 >> x2 >> p2;

        mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;

        if (p1 > 7)
            cout << ">\n";
        else if (p2 > 7)
            cout << "<\n";
        else
        {
            fi(i, 0, p1) x1 *= 10;
            fi(i, 0, p2) x2 *= 10;

            if (x1 > x2)
                cout << ">\n";
            else if (x1 < x2)
                cout << "<\n";
            else
                cout << "=\n";
        }
    }

    return 0;
}