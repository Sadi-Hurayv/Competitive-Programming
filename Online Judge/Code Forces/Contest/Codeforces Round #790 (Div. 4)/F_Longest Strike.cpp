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

    ll n, k, tc, tmp;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        map<ll, ll> mp;
        fi(i, 0, n) cin >> tmp, mp[tmp]++;

        ll l, fl, r, fr, cnt, diff;
        cnt = 0, diff = INT_MIN;
        flg = false;

        for (auto it : mp)
        {
            if (cnt == 0)
                l = it.first;

            if (it.second >= k)
            {
                flg = true;
                if(it.first-r>1)
                    l=it.first, cnt=0;

                cnt++, r = it.first;
                if (diff < (r - l))
                {
                    fl = l, fr = r;
                    diff = max(diff, (r - l));
                }
            }
            else
                cnt = 0;
        }
        if (flg)
            cout << fl << " " << fr << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}