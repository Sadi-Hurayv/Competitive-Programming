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

ll binaryToDecimal(ll n)
{
    ll tmp = n, des = 0, base = 1;
    while (tmp)
    {
        ll lstdgt = tmp % 10;
        tmp /= 10;
        des += lstdgt * base;
        base *= 2;
    }

    return des;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a1, a2, b1, b2, c1, c2, d1, d2, tc, cas;
    bool ok, flg;
    char dot;

    cas = 0;
    cin >> tc;
    while (tc--)
    {
        cas++;
        cin >> a1 >> dot >> b1 >> dot >> c1 >> dot >> d1;
        cin >> a2 >> dot >> b2 >> dot >> c2 >> dot >> d2;

        // cout << a1 << " " << b1 << " " << c1 << " " << d1 << endl;
        // cout << a2 << " " << b2 << " " << c2 << " " << d2 << endl;

        a2 = binaryToDecimal(a2);
        b2 = binaryToDecimal(b2);
        c2 = binaryToDecimal(c2);
        d2 = binaryToDecimal(d2);

        if (a1 == a2 && b1 == b2 && c1 == c2 && d1 == d2)
            cout << "Case " << cas << ": Yes\n";
        else
            cout << "Case " << cas << ": No\n";
    }

    return 0;
}