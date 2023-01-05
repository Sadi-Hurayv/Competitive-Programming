#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, gv, mx=-1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cin >> c;
        }
        else
        {
            cin >> gv;
            if(gv>mx)
            {
                mx=gv;
            }
        }
    }
    if(c>=mx)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}
