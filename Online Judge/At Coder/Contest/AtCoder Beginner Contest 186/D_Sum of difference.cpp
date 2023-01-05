#include<bits/stdc++.h>
using namespace std;

//bool compare(int i, int j)
//{
//    return (i>j);
//}

int main()
{
    long long int n, left=0, ans=0;
    cin >> n;
    long long int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        ans+=(arr[i]*i-left);
        left+=arr[i];
        //cout << arr[i] << "\n";
    }
    cout << ans << "\n";

    return 0;
}
