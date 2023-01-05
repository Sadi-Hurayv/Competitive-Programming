#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, diff, n, sum;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        diff=INT_MAX;
        for(int i=1; i<n; i++)
        {
            diff=min(diff,arr[i]-arr[i-1]);
        }

        cout << diff << "\n";


    }
    return 0;
}
