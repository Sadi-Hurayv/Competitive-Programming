#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a1, a2, a3, a4, a5, p, wh;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        wh=0;
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> p;
        wh=a1+a2+a3+a4+a5;
        if(wh*p>120)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
