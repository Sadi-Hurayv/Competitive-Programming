#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int m, n, sum=0, cn=0, cz=0;

    cin >> m >> n;
    long long int arr[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        if(arr[i][0]!=1)
        {
            for(int j=0; j<n; j++)
            {
                arr[i][j]=1-arr[i][j];
            }
        }
    }

    for(int j=0; j<n; j++)
    {
        cn=0;
        cz=0;
        for(int i=0; i<m; i++)
        {
            if(arr[i][j]==0)
                cz++;
            else
                cn++;
        }
        //sum+=pow(2,n-j-1)* max(cz,cn);
        if(cz>cn)
        {
            for(int i=0; i<m; i++)
            {
                arr[i][j]=1-arr[i][j];
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum+=arr[i][j]*powl(2,n-j-1);
        }
    }

    cout << sum << "\n";

    return 0;
}
