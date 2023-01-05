#include<bits/stdc++.h>
using namespace std;

int haveToPay(int m, int n)
{
    if()
}

int main()
{
    int t;
    cin >> t;
    for(int  i=0; i<t; i++)
    {
        int n, m, pay;
        cin >> m >> n;
        pay=haveToPay(m,n);
        cout << pay << endl;
    }
    return 0;
}


//int Ackermann_function(int m, int n)
//{
//    if(m==0)
//    {
//        return n+1;
//    }
//    else if(n==0 && m>=1)
//    {
//        n=1;
//        m=m-1;
//        return haveToPay(m,n);
//    }
//    else if(n>0 && m>0)
//    {
//        int temp_m, temp_n;
//        temp_m=m;
//        temp_n=n-1;
//
//        m=m-1;
//        n=haveToPay(temp_m,temp_n);
//
//        return haveToPay(m,n);
//    }
//}
