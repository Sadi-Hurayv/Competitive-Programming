#include<bits/stdc++.h>
using namespace std;

unsigned long long int Ackermann_function(unsigned long long int m, unsigned long long int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(n==0 && m>=1)
    {
        n=1;
        m=m-1;
        return Ackermann_function(m,n);
    }
    else if(n>0 && m>0)
    {
        unsigned long long int temp_m, temp_n;
        temp_m=m;
        temp_n=n-1;

        m=m-1;
        n=Ackermann_function(temp_m,temp_n);

        return Ackermann_function(m,n);
    }
}


int main()
{
    int t;
    cout << "Enter how many time you want to calculate: "
    cin >> t;
    for(int  i=0; i<t; i++)
    {
        unsigned long long int n, m, res;
        cin >> m >> n;
        res=Ackermann_function(m,n);
        cout << res << endl;
    }
    return 0;
}
