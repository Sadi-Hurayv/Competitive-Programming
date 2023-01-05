#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    set<char>ch;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            ch.insert(s[i]);
    }

//    for(auto it=ch.begin(); it!=ch.end(); ++it)
//    {
//        cout << *it << "-->";
//    }

    cout << ch.size() << "\n";


    return 0;
}
