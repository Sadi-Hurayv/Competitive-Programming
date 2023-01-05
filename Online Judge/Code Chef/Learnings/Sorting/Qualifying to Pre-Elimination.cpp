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
        for(int i=0; i<n; i++)
            cin >> v[i];

        sort(v.begin(),v.end(),greater<int>());

        int ans=k;
        for(int i=k-1; i<n-1; i++)
        {
            if(v[i]==v[i+1])
                ans=i+2;
            else
                break;
        }

        cout << ans << "\n";
    }

    return 0;
}
