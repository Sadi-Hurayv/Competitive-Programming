#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10000;
    int up_b=100000, lo_b=1;

    cout << n << endl;
//    for(int i=up_b; n>0;i--,n--)
//    {
//        if(n==1)
//            cout << i ;
//        else
//            cout << i << " ";
//    }
//    n=10000;
//    cout << endl << n << endl;
    for(int i=lo_b; n>0;i++,n--)
    {
        if(n==1)
            cout << i ;
        else
            cout << i << " ";
    }


    return 0;
}
