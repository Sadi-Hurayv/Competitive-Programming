#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    string num;
    cin >> num;
    for(int i=0; i<num.length(); i++)
    {
        ans=ans*10+(num[i]-'0');
        ans=ans%3;
    }
    cout << ans << endl;

    return 0;
}
