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
vector<bool> is_prime(N, true);
vector<ll> primes;

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i + i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 0; i < N; i++)
        if (is_prime[i])
            primes.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, c, tc;
    bool ok, flg;

    sieve();

    c = 0;
    cin >> tc;
    while (tc--)
    {
        ll nod = 1;
        vector<ll> factors;
        cin >> n;
        for (ll i = 0; primes[i] * primes[i] <= n && i < primes.size(); i++)
        {
            if (n % primes[i] == 0)
            {
                ll p = 0;
                while (n % primes[i] == 0)
                {
                    factors.push_back(primes[i]);
                    n /= primes[i];
                }
            }
        }
        if (n > 1)
            factors.push_back(n);

        for (auto it : factors)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}