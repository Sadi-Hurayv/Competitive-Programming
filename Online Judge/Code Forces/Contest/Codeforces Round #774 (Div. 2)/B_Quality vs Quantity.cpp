#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        long long int sum=0;
        int f=0, b, r;

        b=0;
        r=n-1;
        sum-=arr[b];
        b++;

        for( ; b<=r ; b++, r-- )
        {
            sum+=arr[r]-arr[b];
            if(sum>0)
            {
                f=1;
                break;
            }
        }

        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
