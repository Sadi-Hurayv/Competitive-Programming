 #include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = (a); i < (c); i++)
#define fd(i, a, c) for (ll i = (a); i > (c); i--)
#define fe(it, a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Tuple
#define tll tuple<ll, ll, ll>

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vpi vector<pi>
#define vpll vector<pll>
#define vtll vector<tll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions Related
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define mp make_pair
#define in insert
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(), a.end()

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define EPS 1e-6
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________________________________\

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll a, b, c, k, n, m, p, q, x, y, z, tc, mx, mn;
    char ch;
    string sen, ten;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n + 1);
        fi(i, 1, n + 1) cin >> arr[i], arr[i] = (arr[i] ^ arr[i - 1]);

        flg=false;
        if (arr[n] == 0)
            flg=true;
        else
        {
            if(n>2)
            {
                fi(i, 1, n-1)
                {
                    fi(j, i+1, n)
                    {
                        a=arr[i]^arr[0]; //1 to i --> arr[i]^arr[1-1]
                        b=arr[j]^arr[i]; // i+1 to j --> arr[j]^arr[i+1-1]
                        c=arr[n]^arr[j]; // j+1 to n --> arr[n]^arr[j+1-1]
                        if(a==b && b==c) flg=true;
                        if(flg) break;
                    }
                    if(flg) break;
                }
            }
        }

        if(flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}