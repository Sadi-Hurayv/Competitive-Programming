#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double area;
    while(cin >> n)
    {
        area=((double)(2*(double)sqrt(3)*n*n))/5;
        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}
