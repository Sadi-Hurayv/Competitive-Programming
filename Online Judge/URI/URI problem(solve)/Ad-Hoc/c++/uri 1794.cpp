#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,wa,wb,da,db;
    cin >> n >> wa >> wb >> da >> db;
    if(((wa<=n && n<=wb) && (da<=n && n<=db)))
    {
        cout << "possivel" << endl;
    }
    else
    {
        cout << "impossivel" << endl;
    }
    return 0;
}
