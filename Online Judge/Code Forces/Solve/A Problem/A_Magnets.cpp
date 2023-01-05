#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, c=1, prv;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >>tmp;
        if(i>0)
        {
            if(prv!=tmp)
                c++;
        }
        prv=tmp;
    }
    cout << c << endl;

    return 0;
}
