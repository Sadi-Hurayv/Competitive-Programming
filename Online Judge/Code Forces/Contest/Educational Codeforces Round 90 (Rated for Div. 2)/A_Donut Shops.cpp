#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, b, c, r1, r2;
    double s1, s2;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        s1=a;
        s2=(c*1.00)/(b*1.00);
        if(a>=c)
        {
            r1=-1;
            r2=b;
        }
        else if(s2>=s1)
        {
            r2=-1;
            r1=b-1;
        }
        else if(s1>s2)
        {
            r1=1;
            r2=b;
        }
        cout << r1  << " " << r2 << endl;
    }

    return 0;
}
