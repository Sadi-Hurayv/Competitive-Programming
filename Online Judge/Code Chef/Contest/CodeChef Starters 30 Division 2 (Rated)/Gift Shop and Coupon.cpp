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
        vector<ll> a(n);

        for(int i=0; i<n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll c=0, cup=1, dis;
        for(auto it : a)
        {
            if(it%2==0)
                dis=it/2;
            else
                dis=(it+1)/2;

            if(cup==0 || k<=0)
                break;
            else if(it<=k)
            {
                k-=it;
                c++;
            }
            else if(dis<=k)
            {
                cup--;
                k-=dis;
                c++;
            }
        }

        cout << c << "\n";
    }

    return 0;
}
