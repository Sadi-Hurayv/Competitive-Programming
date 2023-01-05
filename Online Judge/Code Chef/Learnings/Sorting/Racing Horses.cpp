#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<long long int> v;
        for(int j=0; j<n; j++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());
        long long int mn=INT_MAX;
        for(int i=1; i<n; i++)
        {
            tmp=(long long int)abs(v[i]-v[i-1]);
            if(tmp<mn)
                mn=tmp;
        }

        cout << mn << "\n";
    }

    return 0;
}

