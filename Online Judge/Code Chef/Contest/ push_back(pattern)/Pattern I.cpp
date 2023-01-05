#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k;
    cin >> t;
    while(t--)
    {
        cin >> k;
        for(int i=1; i<=k; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(i==1 || i==k)
                    cout << "*";
                else
                    if(j==1 || j==i)
                        cout <<  "*";
                    else
                    cout << " ";


            }
            cout << "\n";
        }
    }

    return 0;
}

