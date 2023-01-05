#include <bits/stdc++.h>
using namespace std;

long long int power(long long int a, long long int n, long long int mod)
{
    long long int x;
    if (n == 1)
        return a % mod;

    x = power(a, n / 2, mod);
    if (n % 2)
        return (((x * x) % mod) * a) % mod;
    else
        return (x * x) % mod;
}

int numberOfDigits(long long int n)
{
    int cnt = 0;
    while (n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

void last_k_digit(long long int a, long long int n, long long int k)
{
    long long int mod = 1, digit;
    for (int i = 0; i < k; i++)
        mod *= 10; // mod=10^k

    digit = power(a, n, mod);
    for (int i = 0; i < k - numberOfDigits(digit); i++)
        cout << 0;
    if (digit)
        cout << digit << endl;
}

long long int last_k_digit_binary(long long int a, long long int n, long long int mod_bin)
{
    long long int x;
    if (n == 1)
        return a % mod_bin;

    x = last_k_digit_binary(a, n / 2, mod_bin);
    // if we use % sign we have to use 2^k, or if we use & then we have to use (2^k)-1 or (1<<k)-1
    // if (n % 2)
    //     return (((x * x) % mod_bin) * a) % mod_bin;
    // else
    //     return (x * x) % mod_bin;
    if (n % 2)
        return (((x * x) & mod_bin) * a) & mod_bin;
    else
        return (x * x) & mod_bin;
}

int main()
{
    long long int a, n, mod, mod_bin, k;
    a = 3, n = 100000, k = 9; // last k digit of a^n

    // Decimal Form
    last_k_digit(a, n, k);

    // Binary Form
    mod_bin = (1 << k) - 1;
    const int k_bin = 9;
    // cout << mod_bin << endl;

    // cout << last_k_digit_binary(a, n, mod_bin) << endl;
    cout << bitset<k_bin>(last_k_digit_binary(a, n, mod_bin)) << endl;

    return 0;
}