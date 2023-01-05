#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int f=0;
        for(long long int i=1; i<=n; i++)
        {
            if(x%i==0)
            {
                tmp=x/i;
                if(tmp<=n)
                {
                    if(tmp<=n-i+1)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }

        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
