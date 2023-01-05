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

    ll n, m, tc, q, x, k;
    bool ok, flg1, flg2;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> q;
        vll arr(n);
        vvll win(n);
        ll winner;
        fi(i, 0, n)
        {
            cin >> arr[i];
            if (i > 0)
            {
                if (arr[i] > arr[winner])
                    winner = i;
                win[winner].push_back(i);
            }
            else
                winner = 0;
        }

        while (q--)
        {
            cin >> x >> k;
            x--;
            ll ans = 0;
            if (k > n - 1)
            {
                ans = win[x].size();
                if (x == winner)
                    ans += (k - (n - 1));
            }
            else
                ans = upper_bound(win[x].begin(), win[x].end(), k) - win[x].begin();

            cout << ans << endl;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T; cin >> T;
//     while(T--) {
//         int n, q; cin >> n >> q;
//         vector<int> a(n);
//         for(int& x : a) cin >> x;
//         int winner_id = 0;
//         vector<vector<int>> e(n);
//         for(int i = 1; i < a.size(); i++) {
//             if(a[winner_id] < a[i]) winner_id = i;
//             e[winner_id].push_back(i);
//         }
//         while(q--) {
//             int x, k; cin >> x >> k;
//             x--;
//             if(k > n - 1) {
//                 int ans = e[x].size();
//                 if(x == winner_id) ans += k - e[x].back();
//                 cout << ans << endl;
//             } else cout << upper_bound(e[x].begin(), e[x].end(), k) - e[x].begin() << endl;
//         }
//     }
//     return 0;
// }