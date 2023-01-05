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
        for(int i=1, fst=1, sec=k; i<=k; i++, fst++, sec--)
        {
            for(int j=1; j<=max(fst,sec); j++)
            {
                if(j==fst && j==sec)
                {
                    cout << i;
                }
                else
                {
                    if(j==fst)
                        cout << i;
                    else if(j==sec)
                        cout << i;
                    else
                        cout << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
