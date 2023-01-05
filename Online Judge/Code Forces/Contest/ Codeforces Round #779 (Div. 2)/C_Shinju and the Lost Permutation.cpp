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
#define ff first
#define ss second

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions Related
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define in insert
#define all(a) a.begin(),a.end()

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
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, h, q, k, c, l, r, x, y, tc, mx, mn, ev, od, fi, lb, ub;
    ll tmp, sum, typ, pos, ans, num, low, mid, high, left, right;
    bool ok, flg;
    string sen, name;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n);
        ll one=0;
        fi(i, 0, n)
        {
            cin >> arr[i];
            if(arr[i]==1) one++;
        }

        ok=true;
        if(one==1)
        {
            fi(i, 0, n)
            {
                if(arr[(i+1)%n]-arr[i]>1)
                    ok=false;
            }
        }
        else ok =false;

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

