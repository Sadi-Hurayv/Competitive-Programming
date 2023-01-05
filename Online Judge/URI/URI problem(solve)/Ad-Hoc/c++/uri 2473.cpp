#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flv[6], lot[6], f=0;

    for(int i=0; i<6; i++)
    {
        cin >> flv[i];
    }

    for(int i=0; i<6; i++)
    {
        cin >> lot[i];
        for(int j=0; j<6; j++)
        {
            if(lot[i]==flv[j])
            {
                f++;
                break;
            }
        }
    }

    if(f==3)
    {
        cout << "terno" << endl;
    }
    else if(f==4)
    {
        cout << "quadra" << endl;
    }
    else if(f==5)
    {
        cout << "quina" << endl;
    }
    else if(f==6)
    {
        cout << "sena" << endl;
    }
    else
    {
        cout << "azar" << endl;
    }

    return 0;
}
