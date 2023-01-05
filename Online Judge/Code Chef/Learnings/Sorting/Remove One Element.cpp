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
        cin >> n;
        vector<ll> vt1(n), vt2(n-1);
        unordered_set<ll> us;

        for(int i=0; i<n; i++) cin >> vt1[i], us.insert(vt1[i]);
        for(int i=0; i<n-1; i++) cin >> vt2[i];

        sort(vt1.begin(), vt1.end());
        sort(vt2.begin(), vt2.end());

        ll ans, flg=0;
        ans=vt2[0]-vt1[1];
        for(auto i : vt2)
        {
            if(us.find(i-ans)==us.end())
            {
                ans=vt2[0]-vt1[0];
                break;
            }
        }

        if(ans<=0)
            ans=vt2[0]-vt1[0];

        cout << ans << "\n";
    }

    return 0;
}
