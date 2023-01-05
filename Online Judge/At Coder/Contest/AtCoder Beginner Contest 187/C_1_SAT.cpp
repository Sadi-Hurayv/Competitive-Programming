#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    set<string>excl;
    set<string> man;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s[0]=='!')
        {
            excl.insert(s.substr(1,s.length()-1));
        }
        else
        {
            man.insert(s);
        }
    }


    int f=1;

    for(auto i=excl.begin(); i!=excl.end(); ++i)
    {
        s=*i;

        if(man.count(s))
        {
            cout << s << "\n";
            f=0;
            break;
        }
    }

    if(f)
        cout << "satisfiable\n";
    else
        cout << s << "\n";

    return 0;
}
