#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, rem, tmp;
    cin >> n;
    sum=0;
    rem=0;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        sum+=tmp;
        rem+=tmp%3;
    }
    cout << sum-rem << endl;

    return 0;
}
