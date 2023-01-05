#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
#define fa(it, a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define in insert

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define PINF 1e18
#define NINF -1e18
//________________________________________________________________________________________//


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, h, q, k, c, l, r, x, y, tc, mx, mn, ev, od, fi, lb, ub;
    ll tmp, sum, typ, pos, ans, num, low, mid, high, left, right;
    bool ok, flg;
    string sen, name;

    cin >> tc;
    while (tc--)
    {
        vll arr(4), nrr(4);
        flg=false;
        fi(i, 0, 4)
        {
            cin >> arr[i];
            if(arr[i]<0)
                flg=true;
        }
        sort(arr.begin(), arr.end());
        ll apb, amb, agb, adb;
        if(flg) // a<b
        {
            if(abs(arr[0])+2==arr[3]) //a-b=arr[0], a+b=arr[3]
            {
                amb=arr[0];
                apb=arr[3];
            }
            else // a-b=arr[0], a+b=arr[2]
            {
                amb=arr[0];
                apb=arr[2];
            }
        }
        else // a=b or a>b
        {
            if(arr[0]==0 && arr[1]==1) // a=b
            {
                amb=0;
                apb=arr[2];
            }
            else // a>b
            {
                if(arr[1]==arr[2])
                {
                    amb=arr[0];
                    apb=arr[3];
                }
                else
                {
                    amb=arr[1];
                    apb=arr[2];
                }
            }
        }
        ll a=(apb+amb)/2;
        ll b=apb-a;
        
        nrr[0]=a+b;
        nrr[1]=a-b;
        nrr[2]=a*b;
        nrr[3]=a/b;
        sort(nrr.begin(), nrr.end());
        
        ok=true;
        fi(i, 0, 4)
        {
            if(arr[i]!=nrr[i])
            {
                ok=false;
                break;
            }
        }

        if(ok)
            cout << a << " " << b << "\n";
        else
            cout << "-1 -1\n";
    }

    return 0;
}
