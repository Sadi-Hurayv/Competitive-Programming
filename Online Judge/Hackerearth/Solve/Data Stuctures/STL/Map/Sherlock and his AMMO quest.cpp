#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//For Loop
#define fii(a,c) for(ll i = a; i < c; i++)
#define fid(a,c) for(ll i = a; i > c; i--)
#define fji(a,c) for(ll j = a; j < c; j++)
#define fjd(a,c) for(ll j = a; j > c; j--)
#define fau(a) for(auto it : a)

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

    ll n, m, q, k, c, l, r, x, y, tc, mx, mn, ev, od, tmp, sum, typ, flg, num;
    string sen, name;
    cin >> n;
    map<ll, multiset<string> , greater<ll> > sus;
    while (n--)
    {
        cin >> name >> num;
        sus[num].insert(name);
    }

    for(auto it1 : sus)
        for(auto it2 : it1.second)
            cout << it2 << " " << it1.first << "\n";

    return 0;
}

