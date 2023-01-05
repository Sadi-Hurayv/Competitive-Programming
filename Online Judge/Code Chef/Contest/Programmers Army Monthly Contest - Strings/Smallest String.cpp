#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n, mn;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s, ans;
        cin >> s;

        vector<int>frq(26);
        for(int i=0; i<n; i++)
        {
            frq[s[i]-'a']++;
        }

        int mn=INT_MAX;
        for(int i=0; i<26; i++)
        {
            if(frq[i]!=0)
            {
                if(frq[i]<mn)
                    mn=frq[i];
            }
        }

        for(int i=0; i<26; i++)
        {
            if(frq[i]%mn!=0)
            {
                ans=s;
                break;
            }
            else
            {
                int c=frq[i]/mn;
                for(int k=0; k<c; k++)
                {
                    ans+=(i+'a');
                }
            }
        }

        sort(ans.begin(), ans.end());
        cout << ans << "\n";
    }


    return 0;
}
