#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k, m;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        ll f, s, dis, x1, y1, x2, y2, typ;
        cin >> x1 >> y1 >> x2 >> y2;

        dis=abs(x1-x2) + abs(y1-y2);

        if(dis%2==0)
            typ=3;
        else
            typ=2;

        dis=(x1-1) + (y1-1); //1
        if(dis%2==0)
        {
            f=1;
            if(typ==2)
            {
                s=2;
            }
            else
            {
                s=3;
            }
        }
        else
        {
            s=1;
            if(typ==2)
            {
                f=2;
            }
            else
            {
                f=3;
            }
        }

        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                if(typ==3)
                {
                    if(i==x2 && j==y2)
                        cout << "2 ";
                    else
                    {
                        if((i+j)%2==0)
                            cout << f << " ";
                        else
                            cout << s << " ";
                    }
                }
                else
                {
                    if((i+j)%2==0)
                        cout << f << " ";
                    else
                        cout << s << " ";
                }
            }
            cout << "\n";
        }

    }

    return 0;
}
