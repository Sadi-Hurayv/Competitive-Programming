#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::string s;
    cin >> s;
    int l=s.length();
    if(s[l-1]=='s')
    {
        s.append("es");
    }
    else
    {
        s.append("s");
    }
    cout << s << endl;

    return 0;
}
