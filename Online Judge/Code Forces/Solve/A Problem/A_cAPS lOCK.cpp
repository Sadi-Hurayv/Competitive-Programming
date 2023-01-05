#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=1;
    string s;
    cin >> s;
    if(s.length()==1)
    {
        if(isupper(s[0]))
            cout << (char)tolower(s[0]) << endl;
        else
            cout << (char)toupper(s[0]) << endl;
    }
    else
    {
        for(int i=1; i<s.length(); i++)
        {
            if(islower(s[i]))
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            for(int i=0; i<s.length(); i++)
            {
                if(isupper(s[i]))
                    cout << (char)tolower(s[i]);
                else
                    cout << (char)toupper(s[i]);
            }
            cout << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
