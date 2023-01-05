#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<int> v(n);
        int mn=INT_MAX, ans=-1;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(k%v[i]==0 && k/v[i]<mn)
            {
                 mn=k/v[i];
                 ans=v[i];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
