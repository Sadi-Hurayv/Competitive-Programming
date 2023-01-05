#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// For Loop
#define fii(a, c) for (ll i = a; i < c; i++)
#define fid(a, c) for (ll i = a; i > c; i--)
#define fji(a, c) for (ll j = a; j < c; j++)
#define fjd(a, c) for (ll j = a; j > c; j--)
#define fau(a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define f first
#define s second

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions
#define pb push_back
#define mp make_pair
#define in insert

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, q, k, c, l, r, x, y, tc, mx, mn, ev, od, tmp, sum, typ, num;
    string sen, name;
    bool ok, flg;

    /// Using Pair
    // cin >> n;
    // vpll nge(n);
    // stack<pll> cntn;
    // fii(0, n)
    // {
    //     cin >> tmp;
    //     nge[i] = mp(tmp, -1);

    //     while (!cntn.empty() && tmp > cntn.top().f)
    //     {
    //         nge[cntn.top().s].s = tmp;
    //         cntn.pop();
    //     }
    //     cntn.push(mp(tmp, i));
    // }

    // fii(0, n)
    //         cout
    //     << nge[i].f << " " << nge[i].s << "\n";

    cin >> n;
    vll nge(n), arr(n);
    stack<ll> cntn;

    fii(0, n) cin >> arr[i];

    fii(0, n)
    {
        while (!cntn.empty() && arr[i] > arr[cntn.top()])
        {
            nge[cntn.top()] = i;
            cntn.pop();
        }
        cntn.push(i);
    }

    while (!cntn.empty())
    {
        nge[cntn.top()] = -1;
        cntn.pop();
    }

    fii(0, n) cout << arr[i] << " " << (nge[i] == -1 ? -1 : arr[nge[i]]) << "\n";

    return 0;
}
