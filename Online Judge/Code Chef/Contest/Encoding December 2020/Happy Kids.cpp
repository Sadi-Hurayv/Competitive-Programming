#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x, tmp, mn, mx, dif;
    cin >> t;
    while(t--)
    {
        mn=INT_MAX;
        mx=INT_MIN;
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            mn=min(mn,tmp);
            mx=max(mx,tmp);
        }

        if((mx-mn)<x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


    return 0;

}
