#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Add two numbers without using arithmetic operators
    long long int x, y, carry;
    cin >> x >> y;
    carry=0;

    while(y!=0)
    {
        carry=x&y;
        x=x^y;
        y=carry<<1;
    }

    cout << x << "\n";

    return 0;
}
