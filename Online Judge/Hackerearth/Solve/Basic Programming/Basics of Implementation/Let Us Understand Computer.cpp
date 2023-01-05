#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, i, ans;
    cin >> t;

    while(t--)
    {
        cin >> n;

        i=1;
        while(i<=sqrt(n))
        {
            i*=2;

            if(n/i >= i/2)
                ans=n-(n/i);
            else
                ans=n-(i/2)+1;
        }

        cout << ans << "\n";
    }


    return 0;
}
