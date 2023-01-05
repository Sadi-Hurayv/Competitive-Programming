#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a, l, w;
    cin >> n >> m >> a;
    if(n%a==0)
        l=n/a;
    else
        l=(n/a)+1;

    if(m%a==0)
        w=m/a;
    else
        w=(m/a)+1;

    cout << (l*w) << endl;
    return 0;
}