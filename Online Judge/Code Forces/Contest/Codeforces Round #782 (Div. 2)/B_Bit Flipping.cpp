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

    ll n, k, a, b, c, x, y, tc, mx, mn, ev, od;
    ll tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        tmp=k;
        cin >> sen;
        if (k % 2 == 0)
            typ = 0;
        else
            typ = 1;
        vll arr(n);
        c = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (k && (sen[i] - '0') == typ)
            {
                arr[i]++;
                k--;
            }
        }
        arr[n - 1] += k;

        fi(i, 0, n)
        {
            ans=tmp-arr[i];
            if(ans%2)
            {
                if(sen[i]=='0') sen[i]='1';
                else sen[i]='0';
            }
        }

        cout << sen << endl;
        fi(i, 0, n) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
