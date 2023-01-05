#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int d, e;
    cin >> d >> e;
    if(d>e)
    {
        cout << "Eu odeio a professora!" << endl;
    }
    else
    {
        if(d+3>e)
        {
            cout << "Parece o trabalho do meu filho!" << endl;
            if(e+2<=24)
            {
                cout << "TCC Apresentado!" << endl;
            }
            else
            {
                cout << "Fail! Entao eh nataaaaal!" << endl;
            }
        }
        else
        {
            cout << "Muito bem! Apresenta antes do Natal!" << endl;
        }
    }
    return 0;

}
