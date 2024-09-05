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

int maxFrequency(vector<int> &nums, int k)
{
    map<int, int> frquencys;
    for (auto num : nums)
        frquencys[num]++;

    int maxFrq = 0, curFrq, prvFrq, cur, prv, tmpk;
    for (auto fit = frquencys.begin(); fit != frquencys.end(); ++fit)
    {
        auto sit = fit;
        cur=fit->first;
        curFrq = fit->second;
        tmpk=k;
        // cout << curFrq << endl;

        while (sit != frquencys.begin() && tmpk>0)
        {
            --sit;
            prv=sit->first;
            prvFrq=sit->second;
            
            tmpk-=(cur-prv);
            while(tmpk>=0 && prvFrq>0)
            {
                prvFrq--;
                curFrq++;
                
                if(prvFrq>0)
                    tmpk-=(cur-prv);
            }
        }
        maxFrq = max(maxFrq, curFrq);
    }
    return maxFrq;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxFrequency(arr, k) << endl;

    return 0;
}