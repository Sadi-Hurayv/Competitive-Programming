#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, e, l;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int q[n];
        long long int sum=0;

        for(int i=0; i<n; i++)
            cin >> q[i];

        for(int j=0; j<n; j++)
        {
            cin >> e;
            for(int i=0; i<e; i++)
            {
                cin >> l;
                sum+=l;
            }
            sum-=(e-1)*q[j];
        }
        cout << sum << "\n";
    }

    return 0;
}
