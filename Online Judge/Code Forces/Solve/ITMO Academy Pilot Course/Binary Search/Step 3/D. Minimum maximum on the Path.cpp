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

ll n, m, d, ttlEdge = -1;
//vector<vvll> network((1e5 + 10), vvll((1e5 + 10), vll()));
map<ll, vpll> network;
vll road;

bool calculate(ll start, ll edge, ll num)
{
    bool flg = false;
    if (network[start].size() == 0)
        return false;

    fe(it, network[start])
    {
        if (edge > d)
            return false;
        if (it.ss > num)
            continue;
        if (it.ff == n)
        {
            // road.in(it.ff);
            // road.in(start);
            ttlEdge = edge;
            road[edge] = it.ff;
            road[edge - 1] = start;
            return true;
        }
        flg = calculate(it.ff, edge + 1, num);
        if (flg)
        {
            // road.in(start);
            road[edge - 1] = start;
            break;
        }
    }
    return flg;
}

bool check(ll num)
{
    bool flg = calculate(1, 1, num); // start, edge, target number

    return flg;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd;
    ll low, mid, high;
    char ch;
    string sen;
    bool ok, flg;

    cin >> n >> m >> d;
    road.resize(d + 1);
    mx = INT_MIN;

    fi(i, 0, m)
    {
        cin >> a >> b >> c;
        network[a].pub(mp(b, c));
        mx = max(mx, c);
    }

    low = -1;  // bad 0
    high = mx; // good 1

    while (high > low + 1)
    {
        mid = low + (high - low) / 2;
        if (check(mid))
            high = mid;
        else
            low = mid;
    }

    // cout << high << endl;

    // cout << ttlEdge << endl;
    // fi(i, 0, ttlEdge + 1) cout << road[i] << " ";

    if (calculate(1, 1, high))
    {
        cout << ttlEdge << endl;
        fi(i, 0, ttlEdge + 1) cout << road[i] << " ";
    }
    else
        cout << -1 << endl;

    return 0;
}
