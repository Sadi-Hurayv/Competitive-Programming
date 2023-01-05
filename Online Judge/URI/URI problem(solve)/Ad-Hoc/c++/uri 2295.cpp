#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, g, ak, gk, ar, gr;

    cin >> a  >> g >> ak >> gk;

    ar=a/ak;
    gr=g/gk;

    if(ar<gr)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "G" << endl;
    }

    return 0;
}
