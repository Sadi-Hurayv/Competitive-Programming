#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, n, d, c, v, flag;

    while((cin >> b >> n) && (b!=0 && n!=0))
    {
        int res[b];

        for(int i=0; i<b; i++)
        {
            cin >> res[i];
        }

        for(int i=0; i<n; i++)
        {
            cin >> d >> c >> v;
            res[d-1]-=v;
            res[c-1]+=v;
        }

        flag=0;
        for(int i=0; i<b; i++)
        {
            if(res[i]<0)
            {
                flag=1;
                cout << "N" << endl;
                break;
            }
        }
        if(flag==0)
        {
            cout << "S" << endl;
        }
    }

    return 0;
}
