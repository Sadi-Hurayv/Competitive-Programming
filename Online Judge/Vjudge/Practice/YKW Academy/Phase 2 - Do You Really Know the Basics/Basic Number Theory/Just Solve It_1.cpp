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

//________________________________________________________________________________________________________________ \\

const long long int N = 1e6 + 10;

ll exponent(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll x;
    if (b & 1)
    {
        x = exponent(a, b - 1);
        return (x * a);
    }
    else
    {
        x = exponent(a, b / 2);
        return (x * x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, m, tc;
    bool ok;

    vector<bool> flg(N);
    vll spf(N);
    for (ll i = 2; i < N; i++)
        spf[i] = i;

    for (ll i = 2; i * i <= N; i++)
    {
        if (!flg[i])
        {
            for (ll j = i; j <= N; j += i)
                flg[j] = true, spf[j] = min(spf[j], i);
        }
    }

    cin >> n;
    vll arr(n);
    fi(i, 0, n) cin >> arr[i];

    for (ll i = 0; i < n; i++)
    {
        ll nod = 1, sod = 1, dpf = 0, tpf = 0, lpf, gpf;
        lpf = spf[arr[i]];
        gpf = -1;

        while (arr[i] > 1)
        {
            gpf = max(spf[arr[i]], gpf);
            ll d = spf[arr[i]];
            ll c = 0;
            while (arr[i] % d == 0)
            {
                tpf++;
                c++;
                arr[i] /= d;
            }
            dpf++;
            c++;
            nod *= c;
            sod *= (exponent(d, c) - 1) / (d - 1);
        }

        cout << lpf << " " << gpf << " " << dpf << " " << tpf << " " << nod << " " << sod << endl;
    }

    return 0;
}