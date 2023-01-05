#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n;

    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int sum=0;
        for(long long int i=1; i<=n; i++)
        {
            if(i==n)
            {
                sum+=i*i*i;
            }
            else
            {
                sum+=2*(i*i*i);
            }
        }

        cout << sum << "\n";

    }
    return 0;
}
