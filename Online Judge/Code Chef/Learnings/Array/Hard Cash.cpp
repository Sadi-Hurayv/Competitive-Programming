#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, res, tmp, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            sum+=tmp;
        }
        cout << sum%k << "\n";
    }
    return 0;
}
