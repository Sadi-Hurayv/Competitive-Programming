#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x1, x2, x3, y1, y2, y3, len;
    cin >> n;

    while(n--)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        len=0;

        if( ((y1==y2) && y3<y2) ||  ((y2==y3) && y1<y3) || ((y3==y1) && y2<y1) )
        {
            if(y1==y2)
                len=abs(x1-x2);
            else if(y2==y3)
                len=abs(x2-x3);
            else if(y3==y1)
                len=abs(x3-x1);
        }
        cout << len << "\n";
    }

    return 0;
}
