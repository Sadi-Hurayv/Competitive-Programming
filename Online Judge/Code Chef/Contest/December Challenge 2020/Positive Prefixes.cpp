#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, k, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> k >> n;
        for(int j=1; j<=n; j++)
        {
            if(j==n)
            {
                cout << j << "\n";
            }
            else
            {
                cout << j << " ";
            }
        }
    }

    return 0;
}
