#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n ;
    cin >> n;

    if(n%2==0)
    {
        cout <<(((n/2)+1)*((n/2)+1)) << "  ";
    }
    else
    {
        cout << (((n+1)/2)*(((n+1)/2)+1))*2 << "  ";
    }


    return 0;
}
