#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z, n, m, c;
    char chr;
    cin >> z;
    while(z--)
    {
        c=0;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> chr;
                if((i==n-1 || j==m-1) && (i!=n-1 || j!=m-1))
                {
                    if(j==m-1)
                    {
                        if(chr!='D')
                        {
                            c++;
                        }
                    }
                    else if(i==n-1)
                    {
                        if(chr!='R')
                        {
                            c++;
                        }
                    }
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
