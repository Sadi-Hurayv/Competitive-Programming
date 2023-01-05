#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e7 + 10;
// ll a[N]={0};
vector<ll> a(N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
   #endif // ONLINE_JUDGE

    ll n, m, x, y, k;
    cin >> n >> m;

    while (m--)
    {
        cin >> x >> y >> k;
        a[x]+=k;
        a[y+1]-=k;
    }

    for(int i=1; i<=n; i++)
        a[i]+=a[i-1];

    // cout << *max_element(a, a+n);
    cout << *max_element(a.begin(), a.begin()+n);

    return 0;
}
