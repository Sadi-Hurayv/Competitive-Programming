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

    ll n, k, b, s, tc;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> k >> b >> s;
        vll arr(n);
        if (s < k * b)
            cout << -1 << endl;
        else if (s > (k * b) + (n * (k - 1)))
            cout << -1 << endl;
        else
        {
            ll i = 0;
            arr[i] = k * b;
            s -= k * b;
            while (s > 0)
            {
                // if (s >= k)
                // {
                //     arr[i] += k - 1;
                //     s -= k - 1;
                // }
                // else
                // {
                //     arr[i] += s;
                //     s -= s;
                // }
                arr[i]+=min(s, k-1);
                s-=min(s, k-1);
                i++;
            }
            for (ll i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    return 0;
}