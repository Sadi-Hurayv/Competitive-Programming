#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t, c;

    cin >> t;

    cin >> s;

    vector<int>v(26);

    for(int i=0; i<t; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            v[s[i]-'a']=1;
        else if(s[i]>='A' && s[i]<='Z')
            v[s[i]-'A']=1;
    }

    int f=1;
    for(int i=0; i<26; i++)
    {
        if(v[i]==0)
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
