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

vll fact(1000010);
void factorial(ll n)
{
    fact[0] = 1;
    for (ll i = 1; i <= n; i++)
        fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
}

bool check(ll val, ll a, ll b)
{
    while (val)
    {
        ll tmp = val % 10;
        if (tmp != a && tmp != b)
            return false;
        val /= 10;
    }
    return true;
}

long long int power(long long int a, long long int n, long long int mod)
{
    long long int ans = 1;
    while (n)
    {
        if (n % 2)
            ans = ((ans % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        n /= 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, a, b, pn, pa, pb, po, ans, poinv, numsum;
    bool ok, flg;

    cin >> a >> b >> n;
    factorial(n);

    ans = 0;
    pn = fact[n] % MOD;
    for (ll i = 0; i <= n; i++)
    {
        numsum = (a * i) + (b * (n - i));
        if (check(numsum, a, b))
        {
            po = ((fact[i] % MOD) * (fact[n - i])) % MOD;
            poinv = (power(po, MOD - 2, MOD));
            ans = ((ans % MOD) + ((pn % MOD) * (poinv % MOD)) % MOD) % MOD;
        }
    }
    cout << ans << endl;

    return 0;
}