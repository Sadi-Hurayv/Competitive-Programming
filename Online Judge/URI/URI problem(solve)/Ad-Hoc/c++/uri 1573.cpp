#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    while((cin >> a >> b >> c) && (a!=0 && b!=0 && c!=0))
    {
        cout << (int)cbrt(a*b*c) << endl;
    }

    return 0;
}
