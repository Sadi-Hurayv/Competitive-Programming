#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==2)
            cout << "-1\n";
        else if(n%2==1)
        {
            for(int i=1; i<=n; i++)
                cout << i << " ";
            cout << "\n";
        }
        else if(n%2==0)
        {
            cout << "2 3 1 4 ";
            for(int i=5; i<=n; i++)
                cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}
