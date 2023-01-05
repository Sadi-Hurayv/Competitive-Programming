#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int flag;

    cin >> s;
    cin >> t;

    flag=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=t[i])
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }


    return 0;
}
