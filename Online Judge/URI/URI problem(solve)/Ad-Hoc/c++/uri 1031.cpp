#include<bits/stdc++.h>
using namespace std;
int triger(int n, int k, int top);
int main()
{
    int n, c, k;
    while(cin >> n, n!=0)
    {
        if(n==13)
        {
            cout << 1 << endl;
        }
        else
        {
            for(k=2; ; k++)
            {
                c=triger(n,k,n);
//                cout << c << "......" << endl;
                if(c+1==13)
                {
                    cout << k << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

int triger(int n, int k, int top)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==top)
    {
        return (triger(n-1,k,top)+1)%n;
    }
    else
    {
        return (triger(n-1,k,top)+k)%n;
    }
}

