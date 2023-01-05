#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//For Loop
#define fii(a,c) for(ll i = a; i < c; i++)
#define fid(a,c) for(ll i = a; i > c; i--)
#define fji(a,c) for(ll j = a; j < c; j++)
#define fjd(a,c) for(ll j = a; j > c; j--)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define f first
#define s second

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector< pi >
#define vpll vector< pll >
#define vvi vector< vi >
#define vvll vector< vll >

// STL Functions
#define pb push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
   freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
   #endif // ONLINE_JUDGE

    ll tc, n, m, q, k, tmp, c, flg, l, r, x, y, mx, mn, ev, od;
    string sen;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n+1), odd, evn;
        fii(0, n)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
                evn.pb(arr[i]);
            else
                odd.pb(arr[i]);
        }
      
        if(odd.size()<=1 || (odd.size()%2!=0 && evn.size()==0)) cout << "-1\n";
        else
        {
            if(odd.size()%2!=0) cout << odd[0] << " ", odd.erase(odd.begin());
            for(auto it : evn) cout << it << " ";
            for(auto it : odd) cout << it << " ";            
            cout << "\n";
        }
    }

    return 0;
}
