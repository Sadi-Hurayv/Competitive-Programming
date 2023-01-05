#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, x, tmp;
    cin >> t;

    while(t--)
    {
        cin >> n;
        for(long long int k=2; k<30, (pow(2,k)-1)<=n; k++)
        {
            tmp=(pow(2,k)-1);
            if(n%tmp==0)
            {
                x=n/tmp;
                break;
            }
        }
        cout << x << "\n";
    }

    return 0;

}
