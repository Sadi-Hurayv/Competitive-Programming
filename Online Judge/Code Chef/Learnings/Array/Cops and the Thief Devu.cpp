#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y, m, tmp, l, h;

    cin >> t;
    while(t--)
    {
        cin >> m >> x >> y;
        int taken[101]={0};
        for(int i=0; i<m; i++)
        {
            cin >> tmp;
            l=tmp-(x*y);
            h=tmp+(x*y);
            if(l<1) l=1;
            if(h>100) h=100;
            for(int j=l; j<=h; j++)
                taken[j]=1;
        }

        int c=0;
        for(int i=1; i<=100; i++)
            if(!taken[i])
                c++;

        cout << c << "\n";
    }

    return 0;
}
