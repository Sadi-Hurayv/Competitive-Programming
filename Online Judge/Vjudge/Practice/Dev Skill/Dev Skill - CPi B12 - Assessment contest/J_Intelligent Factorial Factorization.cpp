#include<bits/stdc++.h>
using namespace std;

int prime[25]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

void factFactorize ( int n )
{
    for ( int i = 0; i < 25 && prime[i] <= n; i++ )
    {
        int x = n;
        int freq = 0;

        if(i!=0)
        {
            cout << " *";
        }

        while(x/prime[i])
        {
            freq+= x/prime[i];
            x = x/prime[i];
        }

        cout << " " << prime[i] << " (" << freq << ")";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> n;
        cout << "Case " << i << ": " << n << " =";
        factFactorize(n);
        cout << "\n";
    }

    return 0;
}
