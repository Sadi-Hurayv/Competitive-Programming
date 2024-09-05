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

    ll k, n, m, tc;
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, ll> frq;
    map<ll, bool> flg;

    for (ll i = 0; i < n; i++)
        cin >> arr[i], arr[i] %= k, frq[arr[i]]++, flg[arr[i]] = true;

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (flg[arr[i]])
        {
            if (arr[i] == k - arr[i] || arr[i] == 0)
            {
                // arr[i] == k - arr[i] means they can make pair among themselvs as their sum is divisible by k
                // arr[i] == 0 means the numbers are individually divisible by k. So they can make pair among themselvs.
                ll x = frq[arr[i]] - 1;
                cnt += (x * (x + 1)) / 2;
            }
            else
                cnt += frq[arr[i]] * frq[k - arr[i]];

            flg[arr[i]] = flg[k - arr[i]] = false;
        }
    }

    cout << cnt << endl;

    return 0;
}