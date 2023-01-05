#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ttl;
    cin >> n;
    ttl=1 + ((((n-1)*n) / 2) + (((n)*(n - 1)*(n - 2)*(n - 3)) / 24));
    //(pow(n,4)-6*pow(n,3)+23*pow(n,2)-18*n+24)/24;
    cout << ttl << endl;
    return 0;
}
