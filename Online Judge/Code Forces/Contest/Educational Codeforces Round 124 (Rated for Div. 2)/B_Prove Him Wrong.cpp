#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        if(n>19)
            cout << "NO\n";
        else
        {   ll tmp=1;
            cout << "YES\n";
            cout << 1 << " ";
            for(int i=1; i<n; i++)
            {
                tmp*=3;
                cout << tmp << " ";
            }
            cout << "\n";
        }
    }


    return 0;
}

