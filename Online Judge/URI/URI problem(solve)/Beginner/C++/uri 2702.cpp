#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,ba,pa,cr,br,pr,sum=0;
    cin >> ca >> ba >> pa;
    cin >> cr >> br >> pr;

    if(cr>ca)
    {
        sum+=cr-ca;
    }
    if(br>ba)
    {
        sum+=br-ba;
    }
    if(pr>pa)
    {
        sum+=pr-pa;
    }

    cout << sum << endl;
    return 0;
}

