#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, typ, pos, val, x, a, b, mn, mx, c, tmp;
    cin >> n >> q;
    std::vector<int>num(n);
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }

    for(int i=0; i<q; i++)
    {
        c=0;
        cin >> typ;
        if(typ==1)
        {
            cin >> pos >> val;
            num[pos-1]=val;
        }
        else if(typ==2)
        {
            cin >> x >> a >> b;
            if(a<b)
            {
                mn=a;
                mx=b;
            }
            else if(a>=b)
            {
                mx=a;
                mn=b;
            }
            for(int j=mn-1; j<=mx-1; j++)
            {
                if(num[j]>x)
                {
                    c++;
                }
            }
            cout << c << endl;
        }
    }
    return 0;
}
