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
        for(int i=k; i>0; i--)
        {
            if(i%2==0)
            {
                for(int j=i; j>0; j--)
                {
                    cout << j;
                }
            }
            else
            {
                for(int j=1; j<=i; j++)
                {
                    cout << j;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}


