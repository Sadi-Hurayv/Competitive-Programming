#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dia, a, b, c;
    cin >> dia;
    cin >> a >> b >> c;

    if(dia<=a && dia<=b && dia <=c)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
