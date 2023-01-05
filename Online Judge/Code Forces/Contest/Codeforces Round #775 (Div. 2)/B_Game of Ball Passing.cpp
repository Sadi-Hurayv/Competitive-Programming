#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];

        ll f=0, sum=0, mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=0)
                f=1;

            sum+=v[i];
            mx=max(mx, (ll)v[i]);
        }

        if(f)
        {
            if(mx<=sum-mx)
                cout << "1\n";
            else
                cout << mx-(sum-mx) << "\n";
        }
        else
            cout << "0\n";

    }

    return 0;
}
