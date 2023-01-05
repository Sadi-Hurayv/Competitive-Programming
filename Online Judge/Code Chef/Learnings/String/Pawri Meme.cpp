#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
        string s, ans="", tmp;
//        cin.ignore();
        cin >> s;
        int len=s.length();
        for(int i=0; i<len; i++)
        {
            tmp=s.substr(i,5);
//            cout << tmp << endl;
            if(i+4<len && tmp=="party")
            {
                ans+="pawri";
                i+=4;
            }
            else
                ans.push_back(s[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}
