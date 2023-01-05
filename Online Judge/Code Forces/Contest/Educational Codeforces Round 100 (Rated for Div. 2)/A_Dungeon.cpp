#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t, a, b, c, mn;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        mn=min(a,b);
        mn=min(mn,c);
        if(((a+b+c)%9==0) && mn>=(a+b+c)/9)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }


    return 0;
}
