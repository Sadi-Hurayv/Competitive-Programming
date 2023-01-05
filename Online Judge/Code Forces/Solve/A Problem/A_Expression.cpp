#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, mx=-1;
    cin >> a >> b >> c;
    mx=max(mx,a+b+c);
    mx=max(mx,(a+b)*c);
    mx=max(mx,a*(b+c));
    mx=max(mx,a*b*c);
    cout << mx << endl;

    return 0;
}
