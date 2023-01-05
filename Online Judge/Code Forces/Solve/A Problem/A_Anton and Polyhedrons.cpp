#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t, c;
    c=0;
    cin >> t;
    while(t--)
    {
        cin >> s;

        if(s=="Tetrahedron")
            c+=4;
        else if(s=="Cube")
            c+=6;
        else if(s=="Octahedron")
            c+=8;
        else if(s=="Dodecahedron")
            c+=12;
        else if(s=="Icosahedron")
            c+=20;
    }

    cout << c << "\n";


    return 0;
}
