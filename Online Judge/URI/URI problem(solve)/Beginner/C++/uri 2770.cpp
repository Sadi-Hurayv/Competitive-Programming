#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d1, d2, x, y;
    while(cin >> d1 >> d2 >> n)
    {
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            if((d1>=x && d2>=y) || (d1>=y && d2>=x))
            {
                cout << "Sim" << endl;
            }
            else
            {
                cout << "Nao" << endl;
            }
        }
    }
    return 0;
}
