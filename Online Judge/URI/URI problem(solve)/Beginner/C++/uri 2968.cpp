#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int lap, sign, t_sign, result, key=10;

    cin >> lap >> sign;
    t_sign=lap*sign;

    for(int i=1; i<10; i++)
    {
        if((t_sign*i)%10==0)
        {
            result=(t_sign*i)/10;
        }
        else
        {
            result=((t_sign*i)/10)+1;

        }
        if(i==9)
        {
            cout << result << endl;
        }
        else
        {
            cout << result << " ";
        }
    }
    return 0;
}
