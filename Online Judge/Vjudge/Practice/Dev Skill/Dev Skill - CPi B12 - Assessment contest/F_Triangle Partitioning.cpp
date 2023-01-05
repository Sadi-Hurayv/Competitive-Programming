#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double ab, bc, ca, r, ad;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> ab >> bc >> ca >> r;
        cout << "Case " << i << ": ";

//    ABC/ADE = (AC/AD)^2
//    AB/AD = sqrt(ABC/ADE)
//    AD = AB/sqrt(ABC/ADE)
//
//    r=ADE/BDEC
//    ADE=r*BDEC
//
//    ABC=ADE+BDEC
//    ABC=(r*BDEC)+BDEC = (r+1)BDEC
//
//    AD = AB/sqrt(((r+1)BDEC)/(r*BDEC)) = AB/sqrt((r+1)/r)

        ad=ab/sqrt((r+1)/r);
        cout << fixed << setprecision(6) << ad << "\n";
    }



    return 0;
}
