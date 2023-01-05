#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, ae, ao, be, bo, ans;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;

        if(a%2==0)
        {
            ae=ao=a/2;
        }
        else
        {
            ae=a/2;
            ao=(a/2)+1;
        }

        if(b%2==0)
        {
            be=bo=b/2;
        }
        else
        {
            be=b/2;
            bo=(b/2)+1;
        }
        ans=(ae*be)+(ao*bo);
        cout << ans << "\n";
    }

    return 0;
}
