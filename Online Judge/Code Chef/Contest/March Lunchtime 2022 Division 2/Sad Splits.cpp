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
        
        ll type;
        if((n%10)%2==0) type=0;
        else type=1;
        n/=10;

        ev=od=0;
        while (n>0)
        {
            if((n%10)%2==0)
                ev++;
            else
                od++;
            
            n/=10;
        }

        if((type==0 && ev>0) || (type==1 && od>0)) cout << "YES\n";
        else cout << "NO\n"; 
    }

    return 0;
}


