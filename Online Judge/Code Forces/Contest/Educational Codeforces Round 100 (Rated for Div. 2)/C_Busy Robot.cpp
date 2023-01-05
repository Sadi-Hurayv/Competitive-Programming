#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, n;
    cin >> T;

    while(T--)
    {
        cin >> n;
        vector<long long int> t(n+1), x(n);
        for(int i=0; i<n; i++)
        {
            cin >> t[i] >> x[i];
        }
        t[n]=2e10+1;

        long long int  cur_x, nex_x, sc, lw, hi;
        sc=0;
        cur_x=0;
        nex_x=0;
        sc=0;
        for(int i=0; i<n; i++)
        {
            lw=cur_x;
            if(cur_x==nex_x)
                nex_x=x[i];

            if(cur_x<nex_x)
            {
                if(nex_x-cur_x>t[i+1]-t[i])
                    cur_x+=t[i+1]-t[i];
                else
                    cur_x=nex_x;
            }
            else
            {
                if(cur_x-nex_x>t[i+1]-t[i])
                    cur_x-=t[i+1]-t[i];
                else
                    cur_x=nex_x;

            }

            hi=cur_x;
            if(hi<lw)
                swap(lw,hi);
            if(lw<=x[i] && x[i]<=hi)
                sc++;

        }
        cout << sc <<"\n";

    }

    return 0;
}
