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

const ll N = 1e6 + 10;

vector<bool> primes(N, true);
vector<bool> valid(N, false);
vector<ll> cnt_valid(N);

void sieve()
{
    primes[0] = primes[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (primes[i])
        {
            for (ll j = i + i; j <= N; j += i)
            {
                primes[j] = false;
            }
        }
    }
}

bool has_zero(ll x)
{
    while (x)
    {
        if (x % 10 == 0)
            return true;
        x /= 10;
    }
    return false;
}

bool is_valid(ll x)
{
    if (!primes[x] || has_zero(x))
        return false;

    ll tmp = 1e6;
    while (tmp > 1)
    {
        ll rem = x % tmp;
        if (!primes[rem])
            return false;
        tmp /= 10;
    }

    return true;
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
    bool ok, flg;

    sieve();
    for (ll i = 1; i < N; i++)
    {
        valid[i] = is_valid(i);
    }

    for (ll i = 1; i < N; i++)
        cnt_valid[i] = cnt_valid[i - 1] + valid[i];

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        cout << cnt_valid[n] << endl;
    }

    return 0;
}