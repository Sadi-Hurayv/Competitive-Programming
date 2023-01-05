#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>v(n);
        int z, o;
        z=o=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i]==0)
                z++;
        }

        o=n-z;
        cout << max(o,z) << "\n";
    }

    return 0;
}
