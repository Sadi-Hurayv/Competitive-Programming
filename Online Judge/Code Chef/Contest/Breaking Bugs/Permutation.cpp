#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, tmp, pre, cur, fst, sec, f, c, mx;
    pre=0;
    f=0;
    fst=0;
    sec=0;
    c=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        cur=tmp;
        if(f==2 && ((cur-pre!=1) || cur < mx))
        {
            c++;
        }
        if(abs(cur-pre)!=1)
        {
            if(f==0)
            {
                fst=i+1;
                f++;
                c++;
                mx=cur;
            }
            else if(f==1)
            {
                sec=i;
                f++;
                c++;
            }

        }

        pre=cur;
    }

    if(f==1)
    {
        sec=n;
        c++;
    }

    if(c==2)
    {
        cout << fst << " " << sec << "\n";
    }
    else
    {
        cout << "0 0\n";
    }

    return 0;
}
