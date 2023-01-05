#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    string s;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cin >> s;
        int c=1, tc=1;

        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                tc++;
            }
            else
            {
                tc=1;
            }
            if(tc%2!=0)
                c++;
        }

        cout << c << "\n";
    }


    return 0;
}

