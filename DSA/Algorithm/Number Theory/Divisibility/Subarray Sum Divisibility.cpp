#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n;
    bool ok, flg;

    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, ll> mod;
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum += arr[i], mod[((sum % k) + k) % k]++;

    ll cnt = 0;
    cnt += mod[0];
    for (auto it : mod)
    {
        if (it.second > 1)
            cnt += ((it.second - 1) * (it.second)) / 2;
    }
    cout << cnt << endl;

    return 0;
}