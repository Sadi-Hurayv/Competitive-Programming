#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
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
#define PI 3.14159265358979323846264338327950
           
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________//

bool check(vll &arr, double v, ll m)
{
    ll c = 0;
    double tmp;
    fi(i, 0, arr.size())
    {
        tmp=(PI *1.0 * arr[i] * arr[i]);
        c += (int)(tmp / v);
    }
        
    return c>=m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, tc, mx, mn, ev, od, r;
    ll sum, typ, pos, len, ans, num, fnd;
    bool ok, flg;
    string sen;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        m++;
        double vol = 0, tmp;
        vll arr(n);
        fi(i, 0, n) cin >> arr[i], tmp=PI*arr[i]*arr[i], vol = max(vol, tmp);
        //cout << vol << endl;


        double low = 0, mid, high = vol, ans=low;
        while (high - low >= 1e-6)
        {
            mid = low + (high - low + 1e-5) / 2.0;
            if (check(arr, mid, m))
                low = mid, ans = low;
            else
                high = mid-1e-5;
            //cout << low << " " << mid << " " << high << endl;
        }
        cout << fixed << setprecision(4)<< ans << endl;
    }

    return 0;
}