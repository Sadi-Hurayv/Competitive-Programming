#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1, v1, d2, v2, p, td, tv, f;
    td=0;
    tv=0;
    f=1;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    if(d1<d2)
    {
        td=d1-1;
        if(((d2-d1)*v1)>=p)
        {
            if(p%v1==0)
            {
                td+=(p/v1);
            }
            else
            {
                td+=(p/v1);
                td++;
            }
            f=0;
        }
        else
        {
            td+=(d2-d1);
            tv=(d2-d1)*v1;
        }

    }
    else if(d2<d1)
    {
        td=d2-1;
        if(((d1-d2)*v2)>=p)
        {
            if(p%v2==0)
            {
                td+=(p/v2);
            }
            else
            {
                td+=(p/v2);
                td++;
            }
            f=0;
        }
        else
        {
            td+=(d1-d2);
            tv=(d1-d2)*v2;
        }
    }
    else
    {
        td=d2-1; ///d1-1
        if(p%(v1+v2)==0)
        {
            td+=(p/(v1+v2));
        }
        else
        {
            td+=(p/(v1+v2));
            td++;
        }
        f=0;
    }

    if(f)
    {
        if(((p-tv)%(v1+v2))==0)
        {
            td+=(p-tv)/(v1+v2);
        }
        else
        {
            td+=(p-tv)/(v1+v2);
            td++;
        }
    }

    cout << td << "\n";

    return 0;
}
