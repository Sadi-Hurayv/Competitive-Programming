#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, f;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> s;
        stack<char> ch;
        int c=0;
        f=1;
        if(s.length()%2==0)
        {
            if(s[0]==')' || s[s.length()-1]=='(')
            {
                cout << "No\n";
            }
            else
            {
                cout << "YES\n";
            }

        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
