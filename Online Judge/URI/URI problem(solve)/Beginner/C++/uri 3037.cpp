#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, m, x, d;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        j=0;
        m=0;
        ///john
        for(int k=0; k<3; k++)
        {
            cin >> x >> d;
            j+=x*d;
        }

        ///merry
        for(int k=0; k<3; k++)
        {
            cin >> x >> d;
            m+=x*d;
        }

        ///result
        if(j>m)
        {
            cout << "JOAO" << endl;
        }
        else
        {
            cout << "MARIA" << endl;
        }
    }
    return 0;
}
