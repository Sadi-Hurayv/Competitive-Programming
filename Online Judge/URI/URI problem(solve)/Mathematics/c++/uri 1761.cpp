#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ang, hori, vert, h, pi=3.141592654;

    while(cin >> ang >> hori >> h)
    {
        ang=(pi/(double)180)*ang;
        vert=hori*(tan(ang));

        cout << fixed << setprecision(2) << (vert+h)*5 << endl;
    }
    return 0;
}
