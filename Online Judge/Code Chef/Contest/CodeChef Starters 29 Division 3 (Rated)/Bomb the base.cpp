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
        vector<int>v(n+10);

        int c=0;

        for(int i=1; i<=n; i++)
        {
            cin >> v[i];
            if(v[i]<k)
                c=i;
        }

        cout << c << "\n";
    }


    return 0;
}

