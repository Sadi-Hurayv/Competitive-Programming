#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll large_gcd(ll a, string s)
{
    ll b = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        b = ((b * 10) % a + (s[i] - '0') % a) % a;
    }

    return gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a;
    string s;

    // Second number is so big that we have to take it in string.
    cin >> a >> s;
    cout << large_gcd(a, s) << endl;

    return 0;
}