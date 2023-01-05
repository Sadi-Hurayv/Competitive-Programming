#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tc, n, m, x;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int t, o;
        t=o=0;

        t=n/2;
        if(n%2!=0)
            o=1;

        while(o<=t+1)
        {
            if(o>=t-1)
                break;
            t--;
            o+=2;
        }

        if(o>t)
        {
            cout << "1";
            while(t--)
                cout << "21";
        }
        else if(o<t)
        {
            cout << "2";
            t--;
            while(t--)
                cout << "12";
        }
        else
        {
            while(t--)
                cout << "21";
        }

        cout << "\n";

    }

    return 0;
}
