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

vector<vector<int>> permutations;

void generatePermutatios(int index, vector<int> &nums)
{
    if (index >= nums.size())
    {
        permutations.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        generatePermutatios(index + 1, nums);
        swap(nums[index], nums[i]);
    }
}

// void generatePermutatios(vector<int> &permutation, vector<int> &flag, vector<int> &nums)
// {
//     if (permutation.size() == nums.size())
//     {
//         permutations.push_back(permutation);
//         return;
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (!flag[i])
//         {
//             permutation.push_back(nums[i]);
//             flag[i] = 1;
//             generatePermutatios(permutation, flag, nums);
//             permutation.pop_back();
//             flag[i] = 0;
//         }
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

    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // vector<int> flag(nums.size(), 0);
    // vector<int> permutation;
    // generatePermutatios(permutation, flag, nums);

    generatePermutatios(0, nums);

    for (auto it : permutations)
    {
        for (auto p : it)
        {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}