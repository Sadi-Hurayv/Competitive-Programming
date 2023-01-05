#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<math.h>
using namespace std;

int gcd(int a,int b);
int main()
{
    int T, N1, N2, D1, D2, NN, DD, GCD;
    string dv1, dv2, op;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> N1 >> dv1 >> D1 >> op >> N2 >> dv2 >> D2;
        if(op.compare("+")==0)
        {
            NN=(N1*D2 + N2*D1);
            DD=(D1*D2);
        }
        else if(op.compare("-")==0)
        {
            NN=(N1*D2 - N2*D1);
            DD=(D1*D2);
        }
        else if(op.compare("*")==0)
        {
            NN=(N1*N2);
            DD=(D1*D2);
        }
        else if(op.compare("/")==0)
        {
            NN=(N1*D2);
            DD=(N2*D1);
        }
        cout << NN << "/" << DD << " = ";

        GCD=gcd(NN,DD);
        if(GCD<0)
            GCD=GCD*(-1);
        NN=NN/GCD;
        DD=DD/GCD;


        cout << NN << "/" << DD << endl;
    }
    return 0;
}

int gcd(int a,int b)
{
    if(b == 0) return a;
    else
    return gcd(b,a%b);
}
