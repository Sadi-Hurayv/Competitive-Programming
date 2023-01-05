#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, mx, ac, ad, bc, bd;
    cin >> a >> b >> c >> d;

    ac=a*c;
    ad=a*d;
    bc=b*c;
    bd=b*d;
    mx=ac;

    if(mx<ad)
        mx=ad;

    if(mx<bc)
        mx=bc;

    if(mx<bd)
        mx=bd;

    cout << mx << endl;


    return 0;
}
