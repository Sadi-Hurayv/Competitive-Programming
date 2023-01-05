#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, res;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==3)
        {
            cout << "3 2 1\n1 3 2\n3 1 2\n";
        }
        else
        {
            for(int i=n; i>0; i--)
            {
                for(int j=0; j<n; j++)
                {
                    res=(i-j);
                    if(res<=0)
                        res+=n;

                    cout << res << " ";
                }
                cout << "\n";
            }
        }

    }

    return 0;
}
