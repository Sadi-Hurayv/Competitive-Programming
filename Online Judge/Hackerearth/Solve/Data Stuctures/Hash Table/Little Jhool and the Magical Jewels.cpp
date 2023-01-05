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

    ll tc, n, m, q, k, tmp, c, flg, l, r, x, y, mx, mn;
    string sen, ruby="ruby";
    cin >> tc;
    while (tc--)
    {
        cin >> sen;
        unordered_map<char, ll> chfrq;
        chfrq.insert(make_pair('r', 0));
        chfrq.insert(make_pair('u', 0));
        chfrq.insert(make_pair('b', 0));
        chfrq.insert(make_pair('y', 0));

        fii(0, sen.length())
        {
            if(ruby.find(sen[i])!=string::npos)
                chfrq[sen[i]]++;
        }

        mn=INT_MAX;
        for(auto it : chfrq)
            mn=min(mn,it.second);
        
        cout << mn << "\n";
    }

    return 0;
}

