#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, t, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> h >> t >> b;
        if(h<200 || h>300)
        {
            cout << "Nao" << endl;
        }
        else if(t<50)
        {
            cout << "Nao" << endl;
        }
        else if(b<150)
        {
            cout << "Nao" << endl;
        }
        else
        {
            cout << "Sim" << endl;
        }
    }
    return 0;
}
