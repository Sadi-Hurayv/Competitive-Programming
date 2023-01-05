#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n;
    cin >>t;
    while(t--)
    {
        cin >> n;

        set<int> s;
        int tmp;

        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            s.insert(tmp);
        }
        cout << n-s.size() << "\n";
    }

    return 0;
}
