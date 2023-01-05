#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, res, f;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        res=log2(n);
        f=pow(2,res);
        cout << f << "\n";
    }

    return 0;
}
