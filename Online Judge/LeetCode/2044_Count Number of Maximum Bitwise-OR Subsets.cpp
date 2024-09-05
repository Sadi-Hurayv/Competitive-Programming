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

//________________________________________________________________________________________________________________ \\

// vector<int> freq(150000, 0);
// int mx = 0;
// void backtracking(vector<int> btwsor, int i, vector<int> &nums)
// {
//     int tail = btwsor[btwsor.size()-1];
//     if(i>=nums.size())
//     {
//         freq[tail]++;
//         mx=max(mx, tail);
//         return;
//     }

//      // consider new element
//      int tmp = tail | nums[i];
//      btwsor.push_back(tmp);
//      backtracking(btwsor, i+1, nums);
//      btwsor.pop_back();

//      // don't consider new element
//      backtracking(btwsor, i+1, nums);
// }

// --------------------

// vector<int> freq(150000, 0);
// int mx = 0;
// void backtracking(int btwsor, int i, vector<int> &nums)
// {
//     if(i>=nums.size())
//     {
//         freq[btwsor]++;
//         mx=max(mx, btwsor);
//         return;
//     }

//      // consider new element
//      backtracking(btwsor | nums[i], i+1, nums);

//      // don't consider new element
//      backtracking(btwsor, i+1, nums);
// }

// -------------------------

int mx = 0;
int cnt=0;
int maxBtwsOR(vector<int> &nums)
{
    for(auto it : nums)
        mx=mx | it;

    return mx;
}

void backtracking(int btwsor, int i, vector<int> &nums)
{
    if(i>=nums.size())
    {
        if(btwsor==mx)
            cnt++;
        return;
    }

     // consider new element
     backtracking(btwsor | nums[i], i+1, nums);

     // don't consider new element
     backtracking(btwsor, i+1, nums);
}

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

    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    // vector<int> btwsor;
    // btwsor.push_back(0);
    // backtracking(btwsor, 0, nums);
    // cout << freq[mx] << endl;
    
    // --------------------

    // backtracking(0, 0, nums);
    // cout << freq[mx] << endl;

    // ----------------

    maxBtwsOR(nums);
    backtracking(0, 0, nums);
    cout << cnt << endl;

    
    return 0;
}