#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    n=(n+1)/2;
    if(k<=n)
    {
        cout << (2*k)-1 << endl;
    }
    else
    {
        cout << 2*(k-n) << endl;
    }


    return 0;
}
