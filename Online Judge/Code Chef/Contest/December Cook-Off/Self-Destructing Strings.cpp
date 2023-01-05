#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int z,o,dif, ans;
        z=0;
        o=0;
        string s;
        cin >> s;
        if(s.length()%2==1)
        {
            cout << "-1\n";
        }
        else
        {
            for(int i=0; i<s.length();i++)
            {
                if(s[i]=='0')
                    z++;
                else if(s[i]=='1')
                    o++;
            }
            if(z==0 || o==0)
            {
                cout << "-1\n";
            }
            else
            {
                dif=abs(z-o);
                ans=dif/2;
                cout << ans << "\n";
            }

        }

    }

    return 0;
}
