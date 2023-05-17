#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int N = 1e6 + 9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, q;
    bool ok;

    vector<ll> spf(N);
    for (ll i = 2; i < N; i++)
        spf[i] = i;

    vector<bool> flg(N);
    for (ll i = 2; i * i < N; i++)
    {
        if (!flg[i])
        {
            for (ll j = i; j < N; j += i)
                flg[j] = true, spf[j] = min(spf[j], i);
        }
    }

    cin >> q;
    while (q--)
    {
        cin >> n;
        vector<ll> factors;

        while (n > 1)
            factors.push_back(spf[n]), n /= spf[n];

        for (auto it : factors)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}