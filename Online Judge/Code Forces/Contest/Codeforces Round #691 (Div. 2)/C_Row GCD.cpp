#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, g, b;
    cin >> n >> m;
    vector<long long int> a(n), z(n);

    g=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i>0)
        {
            g=__gcd(g,abs(a[i]-a[i-1]));
        }
    }
    for(int i=0; i<m; i++)
    {
        cin >> b;
        if(i==m-1)
        {
            cout << __gcd(b+a[0],g) << "\n";
        }
        else
        {
            cout << __gcd(b+a[0],g) << " ";
        }

    }

    return 0;
}
