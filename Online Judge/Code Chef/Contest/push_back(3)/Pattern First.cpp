#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, d;
    cin >> t;
    while(t--)
    {
        cin >> d;
        for(int i=1; i<=d; i++)
        {
            for(int j=i; j<=d; j++)
            {
                cout << " ";
            }

            for(int j=d, k=i; k>0; j--, k--)
            {
                cout << j;
            }
            cout << "\n";
        }

        for(int i=0; i<=d; i++)
        {
            for(int j=0; j<i; j++)
            {
                cout << " ";
            }

            for(int j=d; j>=i; j--)
            {
                cout << j;
            }
            cout << "\n";
        }
    }


    return 0;
}
