#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    std::multiset<char>ch;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ch.insert(s[i]);
        }
    }
    std::multiset<char>:: iterator it;
    for(it=ch.begin(); it!=ch.end(); ++it)
    {
        if(it!=ch.begin())
        {
            cout << "+";
        }
        cout << *it;
    }
    cout << endl;
    return 0;
}
