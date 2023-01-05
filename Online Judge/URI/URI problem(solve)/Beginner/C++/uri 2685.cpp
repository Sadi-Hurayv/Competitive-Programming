#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    while(cin >> d)
    {
        if(((d>=0) && (d<90)) || d==360)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if(((d>=90) && (d<180)))
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if(((d>=180) && (d<270)))
        {
            cout << "Boa Noite!!" << endl;
        }
        else if(((d>=270) && (d<360)))
        {
            cout << "De Madrugada!!" << endl;
        }
    }
    return 0;
}
