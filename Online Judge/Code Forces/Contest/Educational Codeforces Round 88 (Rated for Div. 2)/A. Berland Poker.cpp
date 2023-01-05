#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, k, p, epc, tmp;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        p=0;
        cin >> n >> m >>k;
        epc=n/k;
        if(m==0)
        {
            p=0;
        }
        else if(epc>=m)
        {
            p=m;
        }
        else if(epc<m)
        {
            tmp=((m-epc-1)/(k-1))+1;
            p=epc-tmp;
        }
        cout << p << endl;

    }
    return 0;
}
