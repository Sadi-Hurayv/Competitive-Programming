#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if(x<=a)
        cout << "1\n";
    else if(x>a && x<=b)
        cout << fixed << setprecision(6) << (c*1.0)/(b-a) << "\n";
    else
        cout << "0\n";


    return 0;
}
