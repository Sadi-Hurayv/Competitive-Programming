#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    while(cin >> y)
    {
        if(y%100==0)
        {
            cout << y/100 << endl;
        }
        else
        {
            cout << (y/100)+1 << endl;
        }
    }
    return 0;
}
