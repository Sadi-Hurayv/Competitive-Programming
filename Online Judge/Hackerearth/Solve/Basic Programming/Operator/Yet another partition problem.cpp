#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, x, t, mx, y, z;

    cin >> t;
    while(t--)
    {
        cin >> n;
        x=0;
        vector<long long int>v(n);

        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            x^=v[i];
        }

        mx=x;
        y=0;
        z=0;

        for(int i=0; i<n; i++)
        {
            y^=v[i];
            z=y & (y^x);

            if(z>mx)
            {
                mx=z;
            }
        }

        cout << mx << "\n";
    }


    return 0;
}
