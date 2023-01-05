#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,sum=0;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;
    sum=n1+n2+n3+n4+n5+n6+n7+n8+n9;
    char name[9][20]={"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen",  "Rudolph"};
    if(sum%9==0)
    {
        cout << name[8] << endl;;
    }
    else
    {
        cout << name[(sum%9)-1] << endl;;
    }
    return 0;
}
