#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, remain;
    cin >> n >> k;
    remain=240-k;
    int c=0;
    for(; c<=n;c++)
    {
        remain=remain-(5*c);
        if(remain<0)
            break;
    }

    cout << c-1;

    return 0;
}
