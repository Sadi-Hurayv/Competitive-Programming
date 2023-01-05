#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double x1, x2, x3, y1, y2, y3, area;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        area=abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0;
        cout << setprecision(3) << fixed << area << endl;
    }

    return 0;
}
