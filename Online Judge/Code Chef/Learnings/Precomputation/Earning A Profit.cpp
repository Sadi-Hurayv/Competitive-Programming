#include<bits/stdc++.h>
using namespace std;

const int N=3010;
long long int c[N];
long long int d[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, a;
    cin >> t;
    while(t--)
    {
        cin >> n >> a;

        for(int i=1; i<=n; i++)
        {
            cin >> c[i] >> d[i];
            c[i]+=c[i-1];
        }

        long long int mxprft=0;
        long long int mxr, mnl;
        for(int l=1; l<=n; l++)
        {
            mxr=mnl=d[l];
            for(int r=l; r<=n; r++)
            {
                mxr=max(mxr, d[r]);
                mnl=min(mnl, d[r]);
                mxprft=max(mxprft, (r-l+1)*a - (c[r]-c[l-1]) - (mxr-mnl)*(mxr-mnl));
            }
        }
        cout << mxprft << "\n";
    }

    return 0;
}
