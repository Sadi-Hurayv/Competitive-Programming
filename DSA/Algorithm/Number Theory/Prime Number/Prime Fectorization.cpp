#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, tmpn;
    bool ok, flg;

    cin >> n;
    tmpn = n;
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                factors.push_back(i), n /= i;
        }
    }

    if (n > 1)
        factors.push_back(n);

    cout << "Prime Fector(s) of " << tmpn << ": \n";
    for (auto it : factors)
        cout << it << " ";

    return 0;
}