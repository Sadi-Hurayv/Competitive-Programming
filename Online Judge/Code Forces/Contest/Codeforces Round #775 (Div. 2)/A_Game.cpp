#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n+1);

        for(int i=1; i<=n; i++)
            cin >> v[i];

        int mx=-1, mn=n+1, re=0;
        for(int i=1; i<=n; i++)
        {
            if(v[i]==0)
            {
                mx=max(mx, i);
                mn=min(mn, i);
            }
        }

        re=mx-mn+2;
        if(re<0)
            cout << 0 << "\n";
        else
            cout << re << "\n";
    }

    return 0;
}
