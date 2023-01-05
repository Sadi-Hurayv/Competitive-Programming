#include<bits/stdc++.h>
using namespace std;
int fun(int high, int low, int n, int re);

int main()
{
    int h, w, n, re;
    cin >> h >> w >> n;
    if(h>w)
    {
        re=fun(h,w,n,1);
    }
    else
    {
        re=fun(w,h,n,1);
    }
    cout << re;
    return 0;
}

int fun(int high, int low, int n, int re)
{
    if(high*re>=n)
        return re;
    else
        return fun(high,low,n,re+1);
}
