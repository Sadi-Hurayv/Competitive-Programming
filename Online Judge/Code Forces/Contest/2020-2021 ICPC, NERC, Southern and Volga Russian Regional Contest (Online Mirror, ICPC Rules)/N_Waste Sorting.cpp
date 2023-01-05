#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, c1, c2, c3, a1, a2, a3, a4, a5, pa4, pa5;
    cin >> t;
    while(t--)
    {
        cin >> c1 >> c2 >> c3;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;

        c1=c1-a1;
        c2=c2-a2;
        c3=c3-a3;
        if(c1>0)
        {
            if(a4>c1)
            {
                a4=a4-c1;
                c1=0;
            }
            else
            {
                c1=c1-a4;
                a4=0;
            }
        }

        if(c2>0)
        {
            if(a5>c2)
            {
                a5=a5-c2;
                c2=0;
            }
            else
            {
                c2=c2-a5;
                a5=0;
            }
        }

        c3=c3-(a4+a5);

        if(c1>=0 && c2>=0 && c3>=0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
