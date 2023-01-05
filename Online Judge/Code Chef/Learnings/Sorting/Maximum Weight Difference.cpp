#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<long long int> v(n);
        long long int ttl=0, fw, sw, fa, sn;

        for(int j=0; j<n; j++)
        {
            cin >> v[j];
            ttl+=v[j];
        }

        sort(v.begin(), v.end());

        if(n-k>k)
        {
            sn=k;
            fa=n-k;
        }
        else
        {
            sn=n-k;
            fa=k;
        }

        sw=fw=0;
        for(int i=0; i<sn; i++)
            sw+=v[i];

        fw=ttl-sw;

        cout << (long long int)abs(fw-sw) << "\n";
    }

    return 0;
}


