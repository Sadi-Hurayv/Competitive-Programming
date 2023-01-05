#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, bonecos=0, arquitetos=0, musicos=0, desenhistas=0;
    string name, group;
    cin >> n;
    while(n--)
    {
        cin >> name >> group >> h;
        if(group=="bonecos")
            bonecos+=h;
        else if(group=="arquitetos")
            arquitetos+=h;
        else if(group=="musicos")
            musicos+=h;
        else if(group=="desenhistas")
            desenhistas+=h;
    }
    cout << ((bonecos/8)+(arquitetos/4)+(musicos/6)+(desenhistas/12)) << "\n";

    return 0;
}
