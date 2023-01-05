#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;

    cin >> t;
    while(t--)
    {
        cin >> n;

        for(int i=1, l=n, r=n; i<=n; i++, l--, r++)
        {
            for(int j=1; j<=r; j++)
            {
                if(i==n || j==l || j==r)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }


    return 0;

}
