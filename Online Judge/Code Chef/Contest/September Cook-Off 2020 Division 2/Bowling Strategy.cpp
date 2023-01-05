#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, l;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n >> k >> l;
        if(n>l*k)
        {
            cout << "-1" << endl;
        }
        else if(n>1 && k==1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for(int j=1, c=1; j<=k, c<=n; j++, c++)
            {
                if(c==n)
                {
                    cout << j << endl;
                }
                else
                {
                    cout << j << " ";
                }

                if(j==k)
                {
                    j=0;
                }
            }
        }
    }

    return 0;
}
