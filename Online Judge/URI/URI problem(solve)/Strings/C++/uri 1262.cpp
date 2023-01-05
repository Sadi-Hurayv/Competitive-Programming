#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, rs, rc;

    while(cin >> s)
    {
        cin >> n;
        rs=0;
        rc=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='W')
            {
                rs++;
                rc=0;
            }
            else if(s[i]=='R')
            {
                rc++;
                if(rc==1)
                    rs++;
                if(rc==n)
                    rc=0;
            }
        }
        cout << rs << endl;
    }

    return 0;
}
