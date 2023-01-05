#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, c;
    string s;
    map<string, int>mp;
    //multiset<string> ms;
    cin >> t;
    while(t--)
    {
        cin >> s;
        c=mp[s];
        //c=ms.count(s);
        if(c==0)
        {
            //ms.insert(s);
            mp[s]++;
            cout << "OK\n";
        }
        else
        {
            //ms.insert(s);
            mp[s]++;
            cout << s << c << "\n";
        }
    }
    return 0;
}
