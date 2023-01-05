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
    string sen, pat;
    cin >> tc;
    while (tc--)
    {
        cin >> pat >> sen;

        vll ptfq(26), snfq(26);
        fii(0, pat.length()) ptfq[pat[i]-'a']++;
        fii(0, pat.length()) snfq[sen[i]-'a']++;

        flg=0;
        fii(pat.length(), sen.length())
        {
            if(ptfq==snfq)
            {
                flg=1;
                break;
            }

            snfq[sen[i]-'a']++;
            snfq[sen[i-pat.length()]-'a']--;
        }

        if(ptfq==snfq) flg=1;

        if(flg)
            cout << "YES\n";
        else 
            cout << "NO\n";        
    }

    return 0;
}

