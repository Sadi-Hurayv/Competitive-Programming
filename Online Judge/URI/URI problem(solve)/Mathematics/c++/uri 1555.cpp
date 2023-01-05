#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, x, y, r, b, c, mx;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        r=b=c=0;
        cin >> x >> y;

        r=(3*x)*(3*x)+y*y;
        mx=r;

        b=2*(x*x)+(5*y)*(5*y);
        if(b>r)
        {
            mx=b;
        }

        c=-100*x+y*y*y;
        if(c>mx)
        {
            mx=c;
        }


        if(mx==r)
        {
            cout << "Rafael ganhou" << endl;
        }
        else if(mx==b)
        {
            cout << "Beto ganhou" << endl;
        }
        else if(mx==c)
        {
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}
