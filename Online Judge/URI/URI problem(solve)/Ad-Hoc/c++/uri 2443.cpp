#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, g, up, dn;
    cin >> a >> b >> c >> d;
    dn=(b*d)/__gcd(b,d);
    up=(a*(dn/b))+(c*(dn/d));
    g=__gcd(up,dn);
    cout << up/g << " " << dn/g << endl;
    return 0;
}
