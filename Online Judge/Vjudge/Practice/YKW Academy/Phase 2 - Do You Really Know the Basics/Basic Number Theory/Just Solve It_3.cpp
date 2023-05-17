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

    vector<ll> arr(N), ans(N);
    vector<bool> flg(N);
    cin >> q;
    while (q--)
    {
        cin >> n;
        arr[n]++;
        // flg[n] = true;
    }

    for (ll i = 1; i < N; i++)
    {
        for (ll j = i; j < N; j += i)
        {
            ans[i]+=arr[j];
            // if (flg[j])
            //     ans[i]++;
        }
    }

    for (ll i = 1; i < 1e6 + 1; i++)
        cout << ans[i] << endl;

    return 0;
}