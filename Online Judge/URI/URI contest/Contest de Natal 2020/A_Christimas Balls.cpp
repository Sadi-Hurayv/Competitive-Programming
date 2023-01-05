#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b, g;
    cin >> b >> g;
    if(b<g/2)
        cout << "Faltam " << (g/2)-b << " bolinha(s)\n";
    else
        cout << "Amelia tem todas bolinhas!\n";

    return 0;
}
