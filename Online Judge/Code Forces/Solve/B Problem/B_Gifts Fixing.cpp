#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    long long int mn_cn, mn_or, cnt;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        mn_cn=INT_MAX;
        mn_or=INT_MAX;
        cnt=0;
        cin >> n;
        std::vector<long int>can(n);
        std::vector<long int>orn(n);
        for(int j=0; j<n; j++)
        {
            cin >> can[j];
            if(can[j]<mn_cn)
                mn_cn=can[j];
        }
        for(int j=0; j<n; j++)
        {
            cin >> orn[j];
            if(orn[j]<mn_or)
                mn_or=orn[j];
        }
        for(int j=0; j<n; j++)
        {
            cnt+=(max((can[j]-mn_cn), (orn[j]-mn_or)));
        }
        cout << cnt << endl;
    }

    return 0;
}
