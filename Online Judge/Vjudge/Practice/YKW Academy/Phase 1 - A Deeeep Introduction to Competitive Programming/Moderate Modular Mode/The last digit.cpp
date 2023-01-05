#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define endl "\n"

//________________________________________________________________________________________________________________\

ll power(ll a, ll b, ll mod)
{
    ll ans=1;
    while (b)
    {
        if (b % 2)
            ans = ((ans % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        b /= 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, mod, tc;
    bool ok, flg;

    mod=10;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        cout << power(n, m, mod) << endl;
    }

    return 0;
}