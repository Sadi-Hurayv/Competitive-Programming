#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, b, re;
    string ope;
    cin >> n;
    cin >> a >> ope >> b;
    if(ope=="+")
    {
        re=a+b;
    }
    else if(ope=="*")
    {
        re=a*b;
    }
    if(re<=n)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "OVERFLOW" << endl;
    }

    return 0;
}
