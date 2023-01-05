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

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    queue<ll> arr, brr, tarr, tbrr;
    const ll fin=3628800;
    cin >> n;

    cin >> x;
    fi(i, 0, x) cin >> tmp, arr.push(tmp);
    cin >> y;
    fi(i, 0, y) cin >> tmp, brr.push(tmp);

    tarr=arr, tbrr=brr;
    flg=false;
    c=0;

    while (!empty(arr) && !empty(brr))
    {
        a=arr.front(), b=brr.front();
        arr.pop(), brr.pop();
        if(a>b) arr.push(b), arr.push(a);
        else if(a<b) brr.push(a), brr.push(b);
        c++;
        if(c>fin)
        {
            flg=true;
            break;
        }
        // if(tarr==arr && tbrr==brr)
        // {
        //     flg=true;
        //     break;
        // }
    }

    if(flg) cout << -1 << endl;
    else
    {
        cout << c << " ";
        if(empty(arr)) cout << 2 << endl;
        else cout << 1 << endl;
    }

    return 0;
}
