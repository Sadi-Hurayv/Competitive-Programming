#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc, n, ans;
    cin >> tc;

    while(tc--)
    {
        cin >> n;
        if(n%2)
            cout << (n/2)+1 << "\n";
        else
            cout << n/2 << "\n";
    }

    return 0;
}
