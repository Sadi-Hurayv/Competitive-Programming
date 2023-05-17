#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

// Every even integer greater than 2 can be expressed as the sum of two primes.

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
    ll c = 0;
    cin >> n;

    seive();

    for (ll i = 0; primes[i] <= n / 2; i++)
    {
        if (isPrime[n - primes[i]])
        {
            cout << primes[i] << " + " << n - primes[i] << " = " << n << endl;;
            c++;
        }
    }
    cout << c << endl;

    return 0;
}