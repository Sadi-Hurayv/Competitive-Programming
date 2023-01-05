#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int z, o, flag=0;
    cin >> s;

    z=0;
    o=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            o=0;
            z++;
        }
        else if(s[i]=='1')
        {
            z=0;
            o++;
        }
        if(z==7 || o==7)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
