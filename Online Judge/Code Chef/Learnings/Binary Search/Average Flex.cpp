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
#define in insert


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ll n, m, h, q, k, c, l, r, x, y, tc, mx, mn, ev, od, fi, lb, ub;
    ll tmp, sum, typ, pos, num, low, mid, high;
    bool ok, flg;
    string sen, name;
    
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(110);
        fii(0, n)
            cin >> tmp, arr[tmp+1]++;
        fii(1, 102)
            arr[i]+=arr[i-1];
        // fii(1, 102)
        // {
        //     if(arr[i]>(n-arr[i]))
        //     {
        //         cout << (n-arr[i-1]) << "\n";
        //         break;
        //     }
        // }

        low=1, high=101;
        while (high>low)
        {
            mid=low+(high-low)/2;
            if(arr[mid]<=(n-arr[mid])) low=mid+1;
            else high=mid; //if(arr[mid]>n-arr[mid])
        }
        cout << n-arr[high-1] << "\n";
        
    }

    return 0;
}

