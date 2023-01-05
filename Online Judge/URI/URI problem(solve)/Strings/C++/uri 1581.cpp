#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, flag;
    string cur, pre;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        flag=0;
        for(int j=0; j<n; j++)
        {
            cin >> cur;
            if(j>0 && flag==0)
            {
                if(pre!=cur)
                {
                    flag=1;
                }
            }
            pre=cur;
        }
        if(flag==1)
            cout << "ingles" << endl;
        else
            cout << cur << endl;
    }

    return 0;
}
