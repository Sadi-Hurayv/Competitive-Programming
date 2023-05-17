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

    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll lcm = arr[0];
    for (ll i = 1; i < n; i++)
    {
        lcm = (arr[i] / gcd(arr[i], lcm)) * lcm; // formula lcm(a,b) = (a*b)/gcd(a,b)
    }
    cout << lcm << endl;

    return 0;
}