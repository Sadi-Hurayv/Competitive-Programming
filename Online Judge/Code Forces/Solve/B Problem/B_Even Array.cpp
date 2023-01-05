#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, od, ed;

    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>arr(n);
        od=ed=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2!=i%2)
            {
                if(i%2==0)
                {
                    ed++;
                }
                else
                {
                    od++;
                }
            }
        }
        if(ed==od) cout << ed << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}
