#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n;

    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<long long int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << v[n-1]*v[n-1] << " " << v[0]*v[1] << "\n";
    }

    return 0;
}
