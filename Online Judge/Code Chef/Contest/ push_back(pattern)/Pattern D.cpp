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
        for(int i=0; i<=k; i++)
        {
            for(int s=0; s<i; s++)
            {
                cout << "*";
            }


            cout << i;

            cout << "\n";
        }
    }

    return 0;
}
