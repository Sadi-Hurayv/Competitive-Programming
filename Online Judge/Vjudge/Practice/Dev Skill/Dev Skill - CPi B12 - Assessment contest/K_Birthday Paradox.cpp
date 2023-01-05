
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, i, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        double p=1;
        cin >> n;
        for(j=n; j>=0; j--)
        {
            double tmp=j;
            p*=(tmp/n);
            if(p<=0.5)
                break;
        }
        cout << "Case " << i << ": " << n-j << "\n";
    }

    return 0;
}
