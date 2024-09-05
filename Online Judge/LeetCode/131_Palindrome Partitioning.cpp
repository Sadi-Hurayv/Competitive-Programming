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

vector<vector<string>> palindromPartitions;
bool isPalindrom(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++, right--;
    }
    return true;
}

// void generatePartitions(vector<string> &subStrings, string s, int index)
// {
//     if (index >= s.length())
//     {
//         palindromPartitions.push_back(subStrings);
//         return;
//     }

//     for (int i = 1; i <= s.length() - index; i++)
//     {
//         string temp = s.substr(index, i);
//         if (!isPalindrom(temp))
//             continue;

//         subStrings.push_back(temp);
//         generatePartitions(subStrings, s, index + i);
//         subStrings.pop_back();
//     }
// }

void generatePartitions(vector<string> &subStrings, string s)
{
    if (s.empty())
    {
        palindromPartitions.push_back(subStrings);
        return;
    }

    for (int i = 1; i <= s.length(); i++)
    {
        string temp = s.substr(0, i);
        if (!isPalindrom(temp))
            continue;

        subStrings.push_back(temp);
        generatePartitions(subStrings, s.substr(i, s.length() - i));
        subStrings.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    string s;
    cin >> s;

    vector<string> subStrings;
    generatePartitions(subStrings, s);
    // generatePartitions(subStrings, s, 0);

    for (auto par : palindromPartitions)
    {
        for (auto it : par)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}