#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f1,f2,f3,f4,f5,f6,f7,f8;
    f1=1;
    f2=2;
    f3=6;
    f4=24;
    f5=120;
    f6=720;
    f7=5040;
    f8=40320;

    int n, c=0;
    cin >> n;

    c+=n/f8;
    n=n%f8;

    c+=n/f7;
    n=n%f7;

    c+=n/f6;
    n=n%f6;

    c+=n/f5;
    n=n%f5;

    c+=n/f4;
    n=n%f4;

    c+=n/f3;
    n=n%f3;

    c+=n/f2;
    n=n%f2;

    c+=n/f1;
    n=n%f1;

    cout << c << endl;

    return 0;
}
