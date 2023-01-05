#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int mx=INT_MIN;
        int mn=INT_MAX;
        int tmp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp>mx)
                mx=tmp;
            if(tmp<mn)
                mn=tmp;
        }
        cout << mx-mn << "\n";
    }

    return 0;
}
