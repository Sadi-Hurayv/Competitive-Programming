#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            s.insert(tmp);
        }

        int mn=-1;
        for(auto it : s)
        {
            x-=(it)-mn-1;
            mn=it;

            if(x<0)
                break;
        }

        if(x<0)
            cout << mn+x << "\n";
        else
            cout << mn+x+1 << "\n";

    }

    return 0;
}
