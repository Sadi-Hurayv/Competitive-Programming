#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum;
    while(cin >> n >> m)
    {
        sum=0;
        while(m!=0)
        {
            sum+=m%10;
            m=m/10;
        }
        if(sum%3==0)
        {
            cout << sum << " sim" << endl;
        }
        else
        {
            cout << sum << " nao" << endl;
        }
    }
    return 0;
}
