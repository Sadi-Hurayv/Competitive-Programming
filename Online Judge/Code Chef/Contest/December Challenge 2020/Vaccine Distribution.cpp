#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, d, a, dng, saf, dvd, svd, tvd;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        dng=0;
        saf=0;
        cin >> n >> d;
        for(int j=0; j<n; j++)
        {
            cin >> a;
            if(a>=80 || a<=9)
            {
                dng++;
            }
            else
            {
                saf++;
            }
        }

        if(dng%d==0)
        {
            dvd=dng/d;
        }
        else
        {
            dvd=(dng/d)+1;
        }

        if(saf%d==0)
        {
            svd=saf/d;
        }
        else
        {
            svd=(saf/d)+1;
        }

        tvd=dvd+svd;

        cout << tvd << "\n";
    }

    return 0;
}
