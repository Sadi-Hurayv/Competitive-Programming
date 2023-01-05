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

    ll tc, n, m, q, k, tmp, c, flg, l, r;
    string sen;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> q;
        cin >> sen;
        vvll hsh(26, vll(n+10, 0));

        fii(0, n) hsh[sen[i]-'a'][i+1]=1;
        fii(0, 26)
            fji(1, n+1) 
                hsh[i][j]+=hsh[i][j-1];
        
        while(q--)
        {
            cin >> l >> r;
            ll oc=0;
            fii(0, 26)
                if((hsh[i][r] - hsh[i][l-1])%2 != 0)
                    oc++;
            if(((r-l+1)%2==0 && oc==0) || ((r-l+1)%2 != 0 && oc==1)) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}

