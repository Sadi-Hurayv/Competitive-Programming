#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, res="";
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            res+="0";
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                res+="1";
            }
            else if(s[i+1]=='-')
            {
                res+="2";
            }
            i++;
        }
    }

    cout << res;

    return 0;
}
