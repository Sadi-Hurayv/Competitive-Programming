#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, q, n, x, y, l, h;

    cin >> n >> q;
    vector<long long int> arr(n+1);
    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
        if(i>0)
            arr[i]+=arr[i-1];
    }

    while(q--)
    {
        cin >> x >> y;
        cout << (arr[y]-arr[x-1])/((y-x+1)) << "\n";

    }

    return 0;
}
