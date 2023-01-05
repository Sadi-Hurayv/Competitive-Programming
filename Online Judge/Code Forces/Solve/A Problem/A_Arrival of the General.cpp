#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx, mn, mxid, mnid, num,c;
    cin >> n;
    int v[n];

    mx=INT_MIN;
    mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        if(num>mx)
        {
            mx=num;
            mxid=i;
        }
        if(num<=mn)
        {
            mn=num;
            mnid=i;
        }
    }
    if(mnid>mxid)
    {
        c=mxid+n-mnid-1;
    }
    else if(mxid>mnid)
    {
        c=mxid+n-mnid-1-1;
    }
    cout << c << "\n";

    return 0;
}
