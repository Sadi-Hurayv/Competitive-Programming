#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, e=0, h=0, m=0, x=0;
    string name, race;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> name >> race;
        if(race=="A")
        {
            a++;
        }
        else if(race=="E")
        {
            e++;
        }
        else if(race=="H")
        {
            h++;
        }
        else if(race=="M")
        {
            m++;
        }
        else if(race=="X")
        {
            x++;
        }
    }

    cout << x << " Hobbit(s)" << endl;
    cout << h << " Humano(s)" << endl;
    cout << e << " Elfo(s)" << endl;
    cout << a << " Anao(s)" << endl;
    cout << m << " Mago(s)" << endl;


    return 0;
}
