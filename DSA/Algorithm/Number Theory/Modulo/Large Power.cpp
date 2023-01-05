#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

// (a ^ n) % mod
long long int recursive_power(long long int a, long long int n, long long int mod)
{
    long long int x;
    if (n == 1)
        return a % mod;

    x = recursive_power(a, n / 2, mod);
    if (n % 2)
        return ((((x % mod) * (x % mod)) % mod) * a) % mod;
    else
        return ((x % mod) * (x % mod)) % mod;
}

// (a ^ n) % mod
long long int iterative_power(long long int a, long long int n, long long int mod)
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

// (a ^ n) % mod
long long int binary_power(long long int a, long long int n, long long int mod)
{
    long long int ans = 1;
    for (int i = 0; i < 64; i++) // for 32 bit(int) use 32. for 64 bit(long long) use 64
    {
        if ((n >> i) & 1)
            ans = ((ans % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
    }
    return ans;
}

// (1 / a) % p
long long int inverse_under_prime_mod(long long int a, long long int p)
{
    return recursive_power(a, p - 2, p);
}

// (a * b) % mod
long long int multiplication_mod(long long int a, long long int b, long long int mod)
{
    long long int x;
    if (b == 1)
        return a % mod;

    x = multiplication_mod(a, b / 2, mod);
    if (b % 2)
        return (((x + x) % mod) + a) % mod;
    else
        return (x + x) % mod;
}

// (a * b) % mod
long long multiplication_mod_easy(long long int a, long long int b, long long int mod)
{
    return (__int128(a) * b) % mod;
}

int main()
{
    // a^n
    long long int a, n, p, x, y, m;
    a = 3, n = 100000000000;
    p = 5; // p must be prime
    x = 10123465234878998, y = 65746311545646431, m = 10005412336548794;

    cout << recursive_power(a, n, mod) << endl;
    cout << iterative_power(a, n, mod) << endl;
    cout << binary_power(a, n, mod) << endl;
    cout << inverse_under_prime_mod(a, p) << endl;
    cout << multiplication_mod(x, y, m) << endl;
    cout << multiplication_mod_easy(x, y, m) << endl;

    return 0;
}