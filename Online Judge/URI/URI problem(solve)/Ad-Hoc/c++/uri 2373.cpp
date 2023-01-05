#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, can, gls, b_gls=0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> can >> gls;
        if(can>gls)
        {
            b_gls+=gls;
        }
    }
    cout << b_gls << endl;
    return 0;
}
