#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        std::string s, a, b;
        cin >> n;
        cin >> s;
        a=s.substr(0,s.length()-1);
        b=s.substr(s.length()-1,1);
        cout << a << b << endl;
        if(a.find(b)!=std::string::npos)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
