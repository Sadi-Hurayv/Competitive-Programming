#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, f, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        c=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]==')')
                c++;
            else
            {
                break;
            }
        }
        if(c>(n-c))
            cout << "Yes\n";
        else
            cout << "No\n";

    }


    return 0;
}
