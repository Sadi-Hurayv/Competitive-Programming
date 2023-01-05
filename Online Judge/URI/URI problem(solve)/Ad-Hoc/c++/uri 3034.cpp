#include<bits/stdc++.h>
using namespace std;

bool isPrime(int tmp)
{
    bool flag=true;
    for(int i=2; i<=sqrt(tmp); i++)
    {
        if(tmp%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, tmp;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        tmp=tmp+1;
        if(tmp%7==0 && tmp%2!=0 && isPrime(tmp+2))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }

    return 0;
}
