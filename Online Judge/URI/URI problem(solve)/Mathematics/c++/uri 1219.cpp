#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int a, b, c;
    while(cin >> a >> b >> c)
    {
        long double hp, tra, ica, icr, oca, ocr;
        long long int tmp;

        hp=(a+b+c)/2.00;
        tra=sqrt(hp*(hp-a)*(hp-b)*(hp-c));

       // tmp=(a+b+c)*(b+c-a)*(c+a-b)*(a+b-c);
        ocr=(a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        oca=M_PI*ocr*ocr;

        icr=tra/hp;
        ica=M_PI*icr*icr;


        cout << fixed << setprecision(4) << oca-tra ;
        cout << " ";
        cout << fixed << setprecision(4) << tra-ica ;
        cout << " ";
        cout << fixed << ica << endl;

    }
    return 0;
}
