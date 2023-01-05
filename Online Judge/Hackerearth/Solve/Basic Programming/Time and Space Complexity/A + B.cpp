#include<bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int carry, l, l1, l2, v1, v2, v, re;
    string s1, s2, ans;
    while(cin >> s1 >> s2)
    {
        l1=s1.length();
        l2=s2.length();
        l=max(l1,l2);

        carry=0;
        ans="";
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for(int i=0; i<l; i++)
        {
            if(i<l1) v1=s1[i]-'0';
            else v1=0;

            if(i<l2) v2=s2[i]-'0';
            else v2=0;

            v=v1+v2+carry;
            re=v%10;
            //cout << char(re+'0') << "\n";
            //ans.append(char(re+'0'));
            ans+=char(re+'0');
            v=v/10;
            carry=v%10;
        }

        if(carry>0) ans+=char(carry+'a');
        //cout << ans << "\n";
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";

    }
    return 0;
}
