#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ch, m, t, c, st, et, fst, fet, diff;
    int flag=1;
    cin >> ch >> m >> t;
    fst=0;
    fet=0;
    c=ch;
    for(int i=0; i<m; i++)
    {
        cin >> st >> et;

        diff=st-fet;
        c=c-diff;
        if(c<=0)
        {
            flag=0;
        }

        diff=et-st;
        c=c+diff;
        if(c>ch)
        {
            c=ch;
        }

        fet=et;
    }

    diff=t-fet;
    c=c-diff;
    if(c<=0)
    {
        flag=0;
    }

    if(flag)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
