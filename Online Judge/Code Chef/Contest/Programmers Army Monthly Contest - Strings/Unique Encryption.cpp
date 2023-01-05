#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int k[5]={98, 57, 31, 45, 46};
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        for(int i=0; i<5; i++)
        {
            s[i]=(((s[i]-'A')+k[i])%26)+'A';
        }
        cout << s << "\n";
    }
    return 0;
}
