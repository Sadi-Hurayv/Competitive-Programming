#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k, tmp, l, r;
    string s1, s2;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        vector<int>v(n+1);

        cin >> s1 >> s2;

        for(int i=1; i<=n; i++)
        {
            tmp=((s2[i-1] - s1[i-1])+26)%26;
            if(i%2!=0)
                v[i]+=v[i-1]+tmp;
            else
                v[i]+=v[i-1]-tmp;
        }

        while(k--)
        {
            cin >> l >> r;
            if((v[r]-v[l-1])%26) cout << "No\n";
            else cout << "Yes\n";
        }
    }


    return 0;
}

