#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, x, k, hb, p, f=0;
    cin >> t;
    while(t--)
    {
        cin >> x >> k;
        hb=log(x)/log(k);

        //cout << "\n" << hb << "\n";

        for(long long int i=hb; i>=0; i--)
        {
            p=powl(k,i);
            //cout << "\n" << p << "\n";
            if(p<=x)
            {
                x-=p;
            }
        }

        if(x==0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

