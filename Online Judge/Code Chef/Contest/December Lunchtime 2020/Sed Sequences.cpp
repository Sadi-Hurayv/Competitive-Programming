#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, tmp, sum, k;
    cin >> t;
    while(t--)
    {
        sum=0;
        cin >> n >> k;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            sum+=tmp;
        }
        if(sum%k==0)
        {
            cout << "0\n";
        }
        else
        {
            cout << "1\n";
        }
    }

    return 0;
}
