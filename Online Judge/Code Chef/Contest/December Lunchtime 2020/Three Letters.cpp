#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long  long int t, re, d, ans;
    cin >> t;

    string s;
    while(t--)
    {
        re=0;
        d=0;
        ans=0;
        vector<int> arr(26);
        cin >> s;
        for(int i=0; i<s.length(); i++)
        {
            arr[s[i]-'a']++;
        }

        for(int i=0; i<26; i++)
        {
            re+=arr[i]%2;
            d+=arr[i]/2;
        }

        if(re>=d)
        {
            ans=d;
        }
        else
        {
            ans=re;
            ans+=((d-re)*2)/3;
        }

        cout << ans << "\n";

    }


    return 0;
}
