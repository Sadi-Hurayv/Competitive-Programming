#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    std::set<string>lex;
    cin >> s1 >> s2;
    lex.insert(s1);
    lex.insert(s2);
    for(std::set<string>::iterator it=lex.begin(); it!=lex.end(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}
