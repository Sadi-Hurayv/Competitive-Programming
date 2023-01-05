#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    long long int n, mod, digit;
    cin >> num;
    cin >> n;

    mod=0;
    for(long long int i=0; i<num.length(); i++)
    {
        digit=num[i]-'0';
        mod=mod*10+digit;
        mod=mod%n;
    }

    cout << mod << endl;

    return 0;
}
