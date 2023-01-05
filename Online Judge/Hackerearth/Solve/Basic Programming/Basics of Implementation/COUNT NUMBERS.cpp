#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, f, pre_f, c, n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        c=0;
        cin >> s;
        f=0;
        pre_f=f;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]<='9' && s[i]>='0')
            {
                f=1;
                if(pre_f!=f)
                    c++;
            }
            else
            {
                f=0;
            }
            pre_f=f;
        }
        cout << c << "\n";
    }
    return 0;
}
