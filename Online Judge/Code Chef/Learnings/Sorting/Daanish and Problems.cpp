#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> t;
    while(t--)
    {
        vector<long long int> v(10);
        for(int i=0; i<10; i++)
        {
            cin >> v[i];
        }

        long long int k, sum, ans;
        cin >> k;

        sum=0;
        for(int i=9; i>=0; i--)
        {
            sum+=v[i];
            if(sum>k)
            {
                ans=i+1;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
