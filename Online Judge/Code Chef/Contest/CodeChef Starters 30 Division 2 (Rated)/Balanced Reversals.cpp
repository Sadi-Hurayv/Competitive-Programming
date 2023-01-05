#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        string s;
//        vector<ll> vct(n);

        cin >> s;
        ll z, o;
        z=o=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                z++;
            else if(s[i]=='1')
                o++;
        }

        for(int i=0; i<z; i++)
            cout << "0";
        for(int i=0; i<o; i++)
            cout << "1";

        cout << "\n";
    }

    return 0;
}

