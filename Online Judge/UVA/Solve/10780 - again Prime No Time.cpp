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

const ll N = 10010;
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

    ll k, n, m, tc, cs = 0;
    bool ok, flg;

    sieve();

    cin >> tc;
    while (tc--)
    {
        ll pw = INT_MAX;
        cin >> m >> n;
        for (ll i = 0; i < primes.size(); i++)
        {
            if (m % primes[i] == 0)
            {
                ll p = 0;
                while (m % primes[i] == 0)
                {
                    p++;
                    m /= primes[i];
                }

                ll ft = 0;
                for (ll j = 1; j <= n; j++)
                {
                    ll x = j;
                    if (x % primes[i] == 0)
                    {
                        while (x % primes[i] == 0)
                        {
                            ft++;
                            x /= primes[i];
                        }
                    }
                }
                pw = min(pw, ft / p);
            }
        }
        cout << "Case " << ++cs << ":" << endl;
        if (pw)
            cout << pw << endl;
        else
            cout << "Impossible to divide" << endl;
    }

    return 0;
}