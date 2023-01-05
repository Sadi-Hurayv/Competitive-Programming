#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, sn, sm;
    sm=0;
    sn=0;
    cin >> n >> m;

    while(n)
    {
        sn+=(n%10);
        n/=10;
    }

    while(m)
    {
        sm+=(m%10);
        m/=10;
    }

    cout << max(sm,sn) << "\n";


    return 0;
}
