#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        long long int len=s.length();
        long long int sum=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                sum+=(len-i)*(i+1);
            }
        }

        cout << sum << "\n";
    }


    return 0;
}
