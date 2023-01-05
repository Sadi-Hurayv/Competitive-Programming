#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=2e5 + 10;
vector<ll>a(N), b(N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;

        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];

        ll afmn, asmn, bfmn, bsmn, ls, rs, lcr, rcl;
        afmn=asmn=bfmn=bsmn=1e18;

        for(int i=0; i<n; i++)
        {
            afmn=min(afmn, abs(a[0]-b[i]));
            asmn=min(asmn, abs(a[n-1]-b[i]));
            bfmn=min(bfmn, abs(a[i]-b[0]));
            bsmn=min(bsmn, abs(a[i]-b[n-1]));
        }

        ls=min(abs(a[0]-b[0]), afmn+bfmn);
        rs=min(abs(a[n-1]-b[n-1]), asmn+bsmn);

        lcr=min(abs(a[0]-b[n-1]), afmn+bsmn);
        rcl=min(abs(a[n-1]-b[0]), asmn+bfmn);

        cout << min(ls+rs, lcr+rcl) << "\n";
    }

    return 0;
}

