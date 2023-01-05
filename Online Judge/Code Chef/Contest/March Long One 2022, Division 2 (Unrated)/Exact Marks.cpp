#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc, n, x;
    cin >> tc;

    while(tc--)
    {
        ll a, b, c;
        a=b=c=0;
        cin >> n >> x;

        if(x%3==0)
        {
            a=x/3;
            c=n-a;
        }
        else
        {
            ll re=x%3;
            a=(x/3)+1;
            b=(a*3)-x;
            c=n-(a+b);
        }
        if(c<0)
            cout << "NO\n";
        else
            cout << "YES\n" << a << " " << b << " " << c << "\n";
    }

    return 0;
}

