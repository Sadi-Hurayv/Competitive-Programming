#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, n;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<long long int> v(n);

        for(int i=0; i<n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        long long int mn=INT_MAX, dif;
        for(int i=0; i<n-x+1; i++)
        {
            dif=v[i+x-1]-v[i];
            mn=min(mn,dif);
        }

        cout << mn << "\n";
    }

    return 0;
}
