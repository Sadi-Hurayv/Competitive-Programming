#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v(10e5 + 10);
ll md=1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, m, dc1, dc2, x, w, tmp;

    cin >> n >> m;

    for(int i=1; i<=n; i++)
        cin >> v[i];

    while(m--)
    {
        cin >> dc1 >> x;
        tmp=v[dc1];
        v[dc1]=0;
        while(x--)
        {
            cin >> w >> dc2;
            v[dc2]=((v[dc2]) + ((w) * (tmp)))%md;
        }
    }

    for(int i=1; i<=n; i++)
        cout << v[i] << "\n";

    return 0;
}

