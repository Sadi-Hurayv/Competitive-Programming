#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    int long long sum, mx=INT_MIN;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>mx)
        {
            mx=sum;
        }
    }

    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<m; j++)
        {
            sum+=arr[j][i];
        }
        if(sum>mx)
        {
            mx=sum;
        }
    }

    cout << mx << endl;

    return 0;
}
