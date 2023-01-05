#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, c, p, flag;
    while(cin >> n && n!=0)
    {
        std::vector<int>pos(n,0);
        flag=1;
        for(int i=0; i<n; i++)
        {
            cin >> c >> p;
            if(i+p<0 || i+p>=n || pos[i+p])
            {
                flag=0;
            }
            if(flag)
            {
                pos[i+p]=c;
            }
        }
        if(flag)
        {
            for(int i=0; i<n; i++)
            {
                if(i==n-1)
                {
                    cout << pos[i] << endl;
                }
                else
                {
                    cout << pos[i] << " ";
                }
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
