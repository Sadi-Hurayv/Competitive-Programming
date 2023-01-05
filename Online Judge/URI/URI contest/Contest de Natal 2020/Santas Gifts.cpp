#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, inc=1, pre;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            pre=arr[i];
            sum+=inc;
        }
        else
        {
            if(pre!=arr[i])
            {
                inc++;
            }
            sum+=inc;
            pre=arr[i];
        }
    }

    cout << sum << "\n";
    return 0;
}
