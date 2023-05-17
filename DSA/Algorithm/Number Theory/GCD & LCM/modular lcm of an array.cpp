#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const ll N = 1e6 + 10;
const ll mod = 1e9 + 7;

vector<bool> isPrime(N, true);
vector<ll> primes;
map<ll, ll> maxFactor;
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 1; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i + i; j <= N; j += i)
                isPrime[j] = false;
        }
    }

    for (ll i = 0; i < N; i++)
        if (isPrime[i])
            primes.push_back(i), maxFactor[i] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    sieve();

    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < n; i++)
    {
        ll x = arr[i];
        for (auto it : primes)
        {
            ll c = 0;
            while (x % it == 0 && x >= it)
                c++, x /= it;

            maxFactor[it] = max(maxFactor[it], c);
        }
    }

    

    ll lcm = 1;
    for (auto it : maxFactor)
    {
        ll c = it.second;
        if (c)
        {
            for (ll i = 0; i < c; i++)
            {
                lcm = (lcm * it.first) % mod;
            }
        }
    }
    cout << lcm << endl;

    return 0;
}