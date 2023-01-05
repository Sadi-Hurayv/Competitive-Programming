#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d, rem;
    int h, m, s;
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

        h=d/15;
        rem=d-(h*15);
//        cout << rem <<endl;
        m=rem/0.25;
        rem=rem-(m*.25);
//        cout << rem <<endl;
        s=rem/0.004166;
        h=h+6;
        h=h%24;

        if(h<10)
        {
            cout << "0" << h << ":" ;
        }
        else
        {
            cout << h << ":" ;
        }

        if(m<10)
        {
            cout << "0" << m << ":" ;
        }
        else
        {
            cout << m << ":" ;
        }

        if(s<10)
        {
            cout << "0" << s << endl;;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}

