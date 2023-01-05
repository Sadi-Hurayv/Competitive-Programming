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
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a, b, c, n, m, q, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen, ten;
    char ch;
    ll l, r;

    cin >> n >> q;
    cin >> sen;
    while (q--)
    {
        cin >> ten;
        if (ten == "pop_back")
            sen.pob();
        else if (ten == "push_back")
            cin >> ch, sen.pub(ch);
        else if (ten == "front")
            cout << sen.front() << endl;
        else if (ten == "back")
            cout << sen.back() << endl;
        else if (ten == "print")
            cin >> pos, cout << sen[pos - 1] << endl;
        else if (ten == "sort")
            cin >> l >> r, sort(sen.begin() + (min(l, r)) - 1, sen.begin() + (max(l, r)));
        else if (ten == "reverse")
            cin >> l >> r, reverse(sen.begin() + (min(l, r)) - 1, sen.begin() + (max(l, r)));
        else if (ten == "substr")
            cin >> l >> r, cout << sen.substr((min(l, r)) - 1, (max(l, r)) - (min(l, r)) + 1) << endl;
    }

    return 0;
}
