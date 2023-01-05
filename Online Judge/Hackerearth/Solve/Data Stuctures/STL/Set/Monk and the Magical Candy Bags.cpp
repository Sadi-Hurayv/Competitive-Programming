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
#define mp make_pair


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ll n, m, q, k, c, l, r, x, y, tc, mx, mn, ev, od, tmp, sum, typ, flg;
    string sen;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        multiset<ll, greater<ll> > cho;
        fii(0, n) cin >> tmp, cho.insert(tmp);
        sum=0;
        while (k--)
        {
            auto it = cho.begin();
            sum+=*(it);
            cho.erase(it);
            cho.insert(*(it)/2);
        }
        cout << sum << "\n";
    }

    return 0;
}

