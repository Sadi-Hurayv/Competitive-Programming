#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, r, c, nr, nc;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> r >> c;
        r=r-2;
        c=c-2;
        if(r%3==0)
            nr=r/3;
        else
            nr=r/3+1;
        if(c%3==0)
            nc=c/3;
        else
            nc=c/3+1;
        cout << (nr*nc) << endl;

    }
    return 0;
}
