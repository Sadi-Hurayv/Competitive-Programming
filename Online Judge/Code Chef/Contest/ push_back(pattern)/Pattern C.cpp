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
            for(int s=i; s<k; s++)
            {
                cout << "*";
            }
            for(int j=i; j>0; j--)
            {
                cout << j;
            }
            cout << "\n";
        }
    }

    return 0;
}
