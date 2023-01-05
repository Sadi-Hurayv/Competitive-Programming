#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        vector<ll>a(n+10), b(n+10);

        for(int i=1; i<=n; i++)
            cin >> a[i];
        for(int i=1; i<=n; i++)
            cin >> b[i];

        ll mx=INT_MIN;
        for(ll i=max(1ll, n-2*k-10); i<=n; i++)
            for(ll j=a[i]; j<=n; j++)
                mx=max(mx, ((i*j)-k*(b[i]^b[j])));

        cout << mx << "\n";
    }


    return 0;
}
