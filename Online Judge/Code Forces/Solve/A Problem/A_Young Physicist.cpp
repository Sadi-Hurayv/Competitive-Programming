#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c1, c2, c3, x, y, z;
    cin >> n;
    c1=c2=c3=0;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        c1+=x;
        c2+=y;
        c3+=z;
    }

    if(c1==0 && c2==0 && c3==0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
