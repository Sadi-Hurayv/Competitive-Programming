#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v(10e5 + 1);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;

        ll p=0, m=0;
        ll mx, mn;
        mx=INT_MIN;
        mn=INT_MAX;

        for(int i=1; i<=n; i++)
        {
            cin >> v[i];
            if(v[i]<0)
                v[i]*=-1;

            if(i%2==0)
            {
                m+=v[i];
                mx=max(mx,v[i]);
            }
            else
            {
                p+=v[i];
                mn=min(mn,v[i]);
            }
        }

        cout << p << " " << m << " " << mn << " " << mn << "\n";

        if(mx>mn)
        {
            m=m-mx+mn;
            p=p-mn+mx;
        }

        cout << p-m << "\n";
    }


    return 0;
}

