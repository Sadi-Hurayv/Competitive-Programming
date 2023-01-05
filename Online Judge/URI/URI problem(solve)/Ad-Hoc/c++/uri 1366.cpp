#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, s, n, nr;
    while(cin >> t && t!=0)
    {
        nr=0;
        for(int i=0; i<t; i++)
        {
            cin >> s >> n;
            nr+=n/2;
        }
        cout << nr/2 << endl;
    }

    return 0;
}
