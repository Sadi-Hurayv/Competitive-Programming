#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const ll N = 1e7 + 10;
vector<ll> phi(N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll q, n;

    for (ll i = 0; i < N; i++)
        phi[i] = i;

    for (ll i = 2; i < N; i++)
    {
        if (phi[i] == i)
        {
            for (ll j = i; j < N; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }

    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << phi[n] << endl;
    }

    return 0;
}