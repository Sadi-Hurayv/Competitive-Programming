#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int len=s1.length(), f=1;
        for(int i=0; i<len; i++)
        {
            if(s1[i]!=s2[i])
            {
                if(s1[i]!='?' && s2[i]!='?')
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
