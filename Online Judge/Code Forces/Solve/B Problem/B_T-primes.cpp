#include<bits/stdc++.h>
using namespace std;

bool isprime(long long int sq)
{
    if(sq<=1) return false;

    if(sq<=3) return true;

    if(sq%2==0 || sq%3==0) return false;

    for(long long int i=5; i*i<=sq; i=i+6)
    {
        if(sq%(i)==0 || sq%(i+2)==0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, t, sq;

    cin >> t;
    while(t--)
    {
        cin >> n;
        sq=sqrt(n);
        if(sq*sq==n)
        {
//            cout << sq << "\n";
            if(isprime(sq))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";

    }

    return 0;
}
