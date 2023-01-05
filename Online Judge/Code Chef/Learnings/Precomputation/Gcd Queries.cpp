#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, q;
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        vector<int> v(n+2), frd(n+2), brd(n+2);

        for(int i=1; i<=n; i++)
            cin >> v[i];

        for(int i=1; i<=n; i++)
        {
            frd[i]=__gcd(frd[i-1], v[i]);
            brd[n-i+1]=__gcd(brd[n-i+1+1], v[n-i+1]);
        }

        while(q--)
        {
            ll l, r, ans;
            cin >> l >> r;
            ans=__gcd(frd[l-1], brd[r+1]);
            cout << ans << "\n";
        }
    }

    return 0;
}
