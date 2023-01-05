#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, l, r;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> l >> r;
        if(l<=r/2)
        {
            cout << "-1\n";
        }
        else
        {
            cout << r << "\n";
        }
    }
    return 0;
}
