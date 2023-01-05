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
        for(int sec=1; sec<=k; sec++)
        {
            for(int fst=1; fst<=k; fst++)
            {
                cout << fst << sec;
            }
            cout << "\n";
        }
    }

    return 0;
}
