#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, h2, m1, m2, tm;
    while(cin >> h1 >> m1 >> h2 >> m2)
    {
        tm=0;
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        if(h1>h2)
        {
            tm=60*(24-h1+h2)+(m2-m1);
        }
        else if(h1<h2)
        {
            tm=60*(h2-h1)+(m2-m1);
        }
        else if(h1==h2)
        {
            if(m2-m1>=0)
            {
                tm=m2-m1;
            }
            else
            {
                tm=(24*60)+(m2-m1);
            }
        }
        cout << tm << endl;
    }
    return 0;
}
