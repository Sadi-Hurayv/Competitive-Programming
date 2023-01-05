#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    double r, hc;
    cin >> h >> m;
    hc=h*5+5*(double)(m*(1.00)/60*(1.00));
    r=abs(hc-m);
    if(r>30)
    {
        r=60-r;
    }
    cout << fixed << setprecision(7) << r*6 << endl;
    return 0;
}
