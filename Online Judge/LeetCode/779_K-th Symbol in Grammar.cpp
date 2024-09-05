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

//________________________________________________________________________________________________________________\\

int kthSymbol;
void generateSymbol(int currentSymbol, int i, int n, int k, int start, int end)
{
    if (i >= n)
    {
        kthSymbol = currentSymbol;
        return;
    }

    int mid = start + ((end - start) / 2);

    if (k <= mid)
        generateSymbol(currentSymbol, i + 1, n, k, start, mid);
    else
        generateSymbol(1 - currentSymbol, i + 1, n, k, mid + 1, end);
}

// void generateSymbol(int currentSymbol, int i, int n, int k)
// {
//     if (i >= n)
//     {
//         cnt++;
//         if (k == cnt)
//             kthSymbol = currentSymbol;
//         return;
//     }

//     if (currentSymbol == 0)
//     {
//         generateSymbol(0, i + 1, n, k);
//         generateSymbol(1, i + 1, n, k);
//     }
//     else if (currentSymbol == 1)
//     {
//         generateSymbol(1, i + 1, n, k);
//         generateSymbol(0, i + 1, n, k);
//     }
// }

// vector<int> symbols;
// void generateSymbol(int currentSymbol, int i, int n)
// {
//     if(i>n)
//     {
//         symbols.push_back(currentSymbol);
//         return;
//     }

//     if(currentSymbol==0)
//     {
//         generateSymbol(0, i+1, n);
//         generateSymbol(1, i+1, n);
//     }
//     else if(currentSymbol==1)
//     {
//         generateSymbol(1, i+1, n);
//         generateSymbol(0, i+1, n);
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, m, tc;
    bool ok, flg;

    cin >> n >> k;

    int currentSymbol = 0;
    // generateSymbol(currentSymbol, 1, n);
    // cout << symbols[k - 1] << endl;

    // generateSymbol(currentSymbol, 1, n, k);
    // cout << endl << kthSymbol << endl;

    generateSymbol(currentSymbol, 1, n, k, 1, 1 << (n-1));
    cout << kthSymbol << endl;

    return 0;
}