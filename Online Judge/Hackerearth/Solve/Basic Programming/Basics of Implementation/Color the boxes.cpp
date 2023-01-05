#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, md, ans=1;
    cin >> n >> m;
    md=pow(10,9)+7;

    while(m>0)
    {
        ans=(ans*m)%md;
        m--;
    }

    cout << ans << "\n";

    return 0;
}
