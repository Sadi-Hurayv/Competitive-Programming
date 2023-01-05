#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    double dis, u1, u2;
    while((cin >> n) && (n!=-1))
    {
        if(n==0)
        {
            cout << "Bom" << endl;
        }
        else
        {
            a=1;
            b=n%257;
            c=n%193;
            dis=pow(b,2)-4*a*c;
//            cout << dis << endl;
            if(dis <= 0)
            {
                cout << "So o ouro" << endl;
            }
            else    ///sqrt(pow(b,2)-4*a*c))>0
            {
                u1=(-b+sqrt(dis))/(2*a);
                u2=(-b-sqrt(dis))/(2*a);

                if((u1<0) && (u2<0))
                {
                    cout << "So o ouro" << endl;
                }
                else
                {
                    cout << "Regular" << endl;
                }
            }
        }
    }
    return 0;
}
