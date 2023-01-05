#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int flag=1;
    if(n==2)
    {
        return 2;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            return n;
        }
        else
        {
            return (prime(n-1));
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << prime(n)*prime(m) << endl;
    return 0;
}
