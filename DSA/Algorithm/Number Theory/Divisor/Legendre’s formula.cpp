#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

// ll largest_power(ll n, ll p)
// {
//     if (n == 0)
//         return 0;
//     return n / p + largest_power(n / p, p);
// }

ll largest_power(ll n, ll p)
{
    ll pw = 0;
    while (n)
    {
        n /= p;
        pw += n;
    }

    return pw;
}

// Legendre’s formula (Given p and n, find the largest x such that p^x divides n!)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, p;
    cin >> n >> p;

    cout << largest_power(n, p) << endl;

    return 0;
}