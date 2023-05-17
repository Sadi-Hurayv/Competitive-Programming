#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const ll N = 100 + 10;
vector<bool> isPrime(N, true);
vector<ll> primes;

void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        for (ll j = i + i; j <= N; j += i)
        {
            isPrime[j] = false;
        }
    }

    for (ll i = 0; i < N; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
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

    ll n;
    cin >> n;
    seive();

    ll nod = 1;
    for (ll i = 0; i < primes.size() && primes[i] <= n; i++)
    {
        ll p = 0, x = n;
        while (x)
        {
            x = x / primes[i];
            p += x;
        }
        p++;
        nod *= p;
    }

    cout << nod << endl;

    return 0;
}