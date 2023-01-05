#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
#define fa(it, a) for (auto it : a)

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
#define ppb pop_back
#define mp make_pair
#define in insert

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define PINF 1e18
#define NINF -1e18
//________________________________________________________________________________________//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, h, q, k, c, l, r, x, y, tc, mx, mn, ev, od, fi, lb, ub;
    ll tmp, sum, typ, pos, ans, num, low, mid, high;
    bool ok, flg;
    string sen, name;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        vll left, right;
        fi(i, 1, n + 1)
        {
            cin >> tmp;
            if (tmp == 1)
                right.pb(i);
            else if (tmp == 2)
                left.pb(i);
        }
        while (m--)
        {
            cin >> fi;
            ll lds, rds;
            // lds = rds = INT_MAX;

            auto itl = lower_bound(left.begin(), left.end(), fi);
            if (itl != left.end())
                lds = (*itl) - fi;
            else
                lds = PINF; // Positive INF

            auto itr = lower_bound(right.begin(), right.end(), fi);
            // if (itr != right.end() && (*itr) == fi)
            //     rds = 0;
            // else
            // {
            //     if (itr != right.begin())
            //     {
            //         itr--;
            //         rds = fi - (*itr);
            //     }
            //     else
            //         rds = PINF;
            // }
            if (itr != right.end())
            {
                if (*(itr) == fi)
                    rds = 0;
                else if (itr == right.begin())
                    rds = PINF;
                else
                {
                    itr--;
                    rds = fi - (*itr);
                }
            }
            else
            {
                if (right.size() == 0)
                    rds = PINF;
                else
                {
                    itr--;
                    rds = fi - (*itr);
                }
            }

            if (fi == 1)
                ans = 0;
            else
            {
                ans = min(lds, rds);
                if (ans == PINF)
                    ans = -1;
            }

            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}
