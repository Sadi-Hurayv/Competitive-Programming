#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, c0, c1, c2, c3, c4, l, r, lhs, rhs, f;
    long long int arr[2][2];
    cin >> t;
    while(t--)
    {
        cin >> c0 >> c1 >> c2 >> c3;
        arr[0][0]=c0;
        arr[0][1]=c1;
        arr[1][0]=c2;
        arr[1][1]=c3;
        f=1;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                for(int k=0; k<2; k++)
                {
                    l=arr[i][j];
                    lhs=arr[l][k];

                    r=arr[j][k];
                    rhs=arr[i][r];
                    if(lhs!=rhs)
                    {
                        f=0;
                        break;
                    }
                }
            }
        }

        if(f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
