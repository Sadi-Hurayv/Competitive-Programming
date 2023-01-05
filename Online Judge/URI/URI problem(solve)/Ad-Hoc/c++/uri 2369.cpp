#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cost=0;
    cin >> n;
    if(n>100)
    {
        cost+=(n-100)*5;
        n=100;
    }
    if(n>30)
    {
        cost+=(n-30)*2;
        n=30;
    }
    if(n>10)
    {
        cost+=(n-10)*1;
        n=10;
    }
    if(n<=10)
    {
        cost+=7;
    }
    cout << cost << endl;
    return 0;
}
