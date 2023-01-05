#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, rn, bn, rmx, bmx;

    cin >> t;
    while(t--)
    {
        cin >> rn;
        vector<int> R(rn);
        rmx=0;
        bmx=0;
        for(int i=0; i<rn; i++)
        {
            cin >> R[i];
            if(i>0)
            {
                R[i]=R[i]+R[i-1];
            }
            rmx=max(rmx,R[i]);
        }


        cin >> bn;
        vector<int> B(bn);

        for(int i=0; i<bn; i++)
        {
            cin >> B[i];
            if(i>0)
            {
                B[i]=B[i]+B[i-1];
            }
            bmx=max(bmx, B[i]);
        }
        cout << rmx+bmx << "\n";
    }

    return 0;
}
