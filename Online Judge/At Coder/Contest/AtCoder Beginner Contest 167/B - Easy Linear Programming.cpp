#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int na, nb, nc, k, sum;
    long long int ta, tb, tc;

    cin >> na >> nb >> nc >> k;
    ///a
    if(k<=na)
    {
        ta=k;
    }
    else
    {
        ta=na;
    }
    k=k-ta;


    ///b
    if(k<=nb)
    {
        tb=k;
    }
    else
    {
        tb=nb;
    }
    k=k-tb;


    ///c
    if(k<=nc)
    {
        tc=k;
    }
    else
    {
        tc=nc;
    }
    k=k-tc;

    sum=ta-tc;
    cout << sum ;


    return 0;
}
