#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,t,ck,ct,t_cost=0;
    cin >> d >> t >> ck >> ct;
    t_cost=(d/t)*ct+d*ck;
    cout << t_cost << endl;
    return 0;
}
