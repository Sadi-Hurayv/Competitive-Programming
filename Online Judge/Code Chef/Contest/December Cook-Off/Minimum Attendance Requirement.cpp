#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        int c=0;
        string s;
        cin >> n;
        cin >> s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1') c++;
        }
        if(c+(120-n)>=90) cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}
