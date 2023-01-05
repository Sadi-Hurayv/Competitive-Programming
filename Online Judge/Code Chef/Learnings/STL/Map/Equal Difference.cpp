#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<int, int> mp;

        int tmp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            mp[tmp]++;
        }

        if(n<3)
            cout << 0 << "\n";
        else
        {   int mx=INT_MIN;
            for(auto it : mp)
                mx=max(mx,it.second);

            if(mx==1)
                cout << n-2 << "\n";
            else
                cout << n-mx << "\n";
        }
    }

    return 0;
}
