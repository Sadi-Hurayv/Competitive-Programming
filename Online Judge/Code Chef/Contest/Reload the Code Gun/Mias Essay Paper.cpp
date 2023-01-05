#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, c=0, i, j, len;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        c=0;
        len=s.length();
        if(len%2!=0)
        {
            j=(len/2)+1;
            i=(len/2)-1;
        }
        else
        {
            j=len/2;
            i=(len/2)-1;
        }

        for(;i>=0 && j<len; i--,j++)
        {
            c+=abs(s[i]-s[j]);
        }

        cout << c << "\n";
    }

    return 0;
}
