#include<bits/stdc++.h>
using namespace std;
long long int arr[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, tmp, sum, mx;
    cin >> n;
//    long long int arr[n];

    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }

    mx=INT_MIN;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; ; j++)
        {
            tmp=((j)*(j+1))/2;
            if(i+tmp-1>n)
                break;
            else
                sum=i+tmp-1;
        }
//        cout << i << "--" << sum << "\n";
        if(arr[sum]-arr[i-1]>mx)
            mx=arr[sum]-arr[i-1];
    }

    cout << mx << "\n";

    return 0;
}
