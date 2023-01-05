#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    string name, color, sz;
}tshirt;

tshirt dtls[65];

bool comp(tshirt a, tshirt b)
{
    if(a.color==b.color)
    {
        if(a.sz==b.sz)
        {
            return a.name<b.name;
        }
        else
        {
            return a.sz>b.sz;
        }
    }
    else
    {
        return a.color<b.color;
    }
}

int main()
{
    int n;

    cin >> n;
    while(n!=0)
    {

        for(int i=0; i<n; i++)
        {
            cin.ignore();
            getline(cin, dtls[i].name);
            cin >> dtls[i].color >> dtls[i].sz;
//            cout << dtls[i].name << "-->" << dtls[i].color << "-->" << dtls[i].sz << endl;
        }

        stable_sort(dtls, dtls+n, comp);

        for(int i=0; i<n; i++)
        {
            cout << dtls[i].color << " " << dtls[i].sz << " " << dtls[i].name << endl;
        }

        cin >> n;
        if(n!=0)
        {
            cout << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
