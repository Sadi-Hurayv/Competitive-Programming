#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y;
    cin >> t;
    while(t--)
    {
        int arr[3];
        cin >> x >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr+3);

        cout << (x-1)*arr[0]+arr[1] << "\n";
    }

    return 0;
}
