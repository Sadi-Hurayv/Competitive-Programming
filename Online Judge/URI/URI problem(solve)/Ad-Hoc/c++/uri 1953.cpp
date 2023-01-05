#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, ep, eh, intu;
    string typ;
    while(cin >> n)
    {
        ep=eh=intu=0;
        for(int i=0; i<n; i++)
        {
            cin >> r >> typ;
            if(typ=="EPR")
            {
                ep++;
            }
            else if(typ=="EHD")
            {
                eh++;
            }
            else
            {
                intu++;
            }
        }
        cout << "EPR: " << ep << endl;
        cout << "EHD: " << eh << endl;
        cout << "INTRUSOS: " << intu << endl;

    }

    return 0;
}
