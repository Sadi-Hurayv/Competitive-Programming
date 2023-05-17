#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

/*
    A trailing zero is always produced by prime factors 2 and 5. So we have to count the number of 5s and 2s in the prime factors of n!
    and take the minimum as answer. If we observe, then we will see that the number of 5s is always less than or equal to the number os 2s.
    Hence, if we can count the number of 5s then our job is done. We can use Legendre's Formula to find the number of 5s in
    the prime fectors of n!.
*/

ll trailing_zeros(ll n)
{
    if (n == 0)
        return 0;
    return n / 5 + trailing_zeros(n / 5);
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
    cout << trailing_zeros(n) << endl;

    return 0;
}