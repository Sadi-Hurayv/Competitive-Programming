#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, mn, up, low;
    cin >> n >> m;
    int arr[m];

    for(int i=0; i<m; i++)
        cin >> arr[i];

    sort(arr, arr+m);

    mn=INT_MAX;
    for(int i=0; i+(n-1)<m; i++)
    {
        low=i;
        up=i+(n-1);
        mn=min(mn,arr[up]-arr[low]);
    }
    cout << mn << "\n";



    return 0;
}
