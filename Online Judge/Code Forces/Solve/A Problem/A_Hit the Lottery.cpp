#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, min_b=0;
    cin >> n;

    min_b+=n/100;
    n=n%100;

    min_b+=n/20;
    n=n%20;

    min_b+=n/10;
    n=n%10;

    min_b+=n/5;
    n=n%5;

    min_b+=n/1;
    n=n%1;

    cout << min_b;
    return 0;
}
