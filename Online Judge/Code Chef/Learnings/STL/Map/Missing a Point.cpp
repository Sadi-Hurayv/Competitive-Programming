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
        int x, y;
        unordered_map<ll, ll> umx, umy;
        for(int i=0; i<4*n-1; i++)
        {
            cin >> x >> y;
            umx[x]++;
            umy[y]++;

            /// if we do not erase the elements while hashing which are even
            ///     later on we have to iterate the whole map to find the odd one, which will eventually case TLE.
            ///     So ultimately at last we will have only one element in the map which is odd.
            if(umx[x]%2==0)
                umx.erase(x);
            if(umy[y]%2==0)
                umy.erase(y);

        }

        for(auto it : umx)
                cout << it.first << " ";

        for(auto it : umy)
                cout << it.first << "\n";

    }
    return 0;
}
