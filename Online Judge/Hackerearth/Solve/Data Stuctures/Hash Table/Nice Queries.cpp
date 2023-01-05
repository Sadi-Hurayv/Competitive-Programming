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

    ll tc, n, m, q, k, tmp, typ, c, flg, l, r, x, y, mx, mn, ev, od;
    string sen;
    cin >> n >> q;
    map<ll, ll> amp;
    while (q--)
    {
        cin >> typ >> tmp;
        if(typ==1)
            amp.insert(mp(tmp, 1));
        else if(typ==2)
        {
            auto it = amp.lower_bound(tmp);
            if(it!=amp.end())
                cout << it->f << "\n";
            else
                cout << "-1\n";
        }
    }

    return 0;
}

