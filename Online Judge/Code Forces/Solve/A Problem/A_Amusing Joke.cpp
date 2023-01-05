#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(26);

    string s, s1, s2;
    cin >> s1 >> s2 >> s;

    for(int i=0; i<s1.length(); i++)
    {
        v[s1[i]-'A']+=1;
    }

    for(int i=0; i<s2.length(); i++)
    {
        v[s2[i]-'A']+=1;
    }

    for(int i=0; i<s.length(); i++)
    {
        v[s[i]-'A']-=1;
    }

    int f=1;
    for(int i=0; i<26; i++)
    {
        if(v[i]!=0)
        {
            f=0;
            break;
        }
    }

    if(f)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
