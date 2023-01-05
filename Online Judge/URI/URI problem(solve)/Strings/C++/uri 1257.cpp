#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        string s;
        sum=0;
        for(int j=0; j<n; j++)
        {
            cin >> s;
            int k=0;
            while(s[k]!='\0')
            {
                sum+=(s[k]-'A')+j+k;
                k++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
