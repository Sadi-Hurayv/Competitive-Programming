#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    std::set<char>ch;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        ch.insert(s[i]);
    }

    if(ch.size()%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
