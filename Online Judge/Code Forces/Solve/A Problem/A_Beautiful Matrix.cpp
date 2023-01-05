#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tmp, r, c, flag=1;;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> tmp;
            if(flag && tmp)
            {
                r=i;
                c=j;
                flag=0;
            }
        }
    }
    cout << abs(r-3)+abs(c-3) << endl;
    return 0;
}
