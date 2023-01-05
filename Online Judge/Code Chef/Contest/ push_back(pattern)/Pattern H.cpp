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
            for(int j=k; j>i; j--)
            {
                cout << " ";
            }
            for(int j=1; j<=(i*2)-1; j++)
            {
                cout << "*";
            }
            cout << "\n";


            for(int j=k; j>i; j--)
            {
                cout << " ";
            }
            for(int j=1; j<=(i*2)-1; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    return 0;
}



