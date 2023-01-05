#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, g, b, f;
    string s;

    cin >> n;
    while(n--)
    {
       cin >> s;
       r=0;
       g=0;
       b=0;
       f=0;
       for(int i=0; i<6; i++)
       {
            if(s[i]=='r')
                r=1;
            if(s[i]=='g')
                g=1;
            if(s[i]=='b')
                b=1;

            if(s[i]=='R')
            {
                if(!r)
                {
                    f=1;
                    break;
                }
            }

            if(s[i]=='G')
            {
                if(!g)
                {
                    f=1;
                    break;
                }
            }

            if(s[i]=='B')
            {
                if(!b)
                {
                    f=1;
                    break;
                }
            }
       }
        if(!f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
