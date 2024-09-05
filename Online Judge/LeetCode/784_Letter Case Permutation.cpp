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

vector<string> permutations;
void generatePermutations(int i, string s)
{
    if (i >= s.length())
    {
        permutations.push_back(s);
        return;
    }

    if (isalpha(s[i]))
    {
        s[i] = tolower(s[i]);
        generatePermutations(i + 1, s);
        s[i] = toupper(s[i]);

        s[i] = toupper(s[i]);
        generatePermutations(i + 1, s);
        s[i] = tolower(s[i]);
    }
    else
        generatePermutations(i + 1, s);
}

// void generatePermutations(string permutation, int i, string s)
// {
//     if (i >= s.length())
//     {
//         permutations.push_back(permutation);
//         return;
//     }

//     if (isdigit(s[i]))
//     {
//         permutation.push_back(s[i]);
//         generatePermutations(permutation, i + 1, s);
//         permutation.pop_back();
//     }
//     else
//     {
//         permutation.push_back(tolower(s[i]));
//         generatePermutations(permutation, i + 1, s);
//         permutation.pop_back();

//         permutation.push_back(toupper(s[i]));
//         generatePermutations(permutation, i + 1, s);
//         permutation.pop_back();
//     }

//     // permutation.push_back(s[i]);
//     // generatePermutations(permutation, i + 1, s);
//     // permutation.pop_back();

//     // if (isalpha(s[i]))
//     // {
//     //     permutation.push_back(isupper(s[i]) ? tolower(s[i]) : toupper(s[i]));
//     //     // permutation.push_back(s[i] ^ (1 << 5)); //case toggle trick
//     //     generatePermutations(permutation, i + 1, s);
//     //     permutation.pop_back();
//     // }

//     // if (isdigit(s[i]))
//     // {
//     //     permutation.push_back(s[i]);
//     //     generatePermutations(permutation, i + 1, s);
//     //     permutation.pop_back();
//     // }
//     // else
//     // {
//     //     char u, l;
//     //     if (isupper(s[i]))
//     //         u = s[i], l = s[i] - ('A' - 'a');
//     //     else
//     //         l = s[i], u = s[i] + ('A' - 'a');

//     //     permutation.push_back(l);
//     //     generatePermutations(permutation, i + 1, s);
//     //     permutation.pop_back();

//     //     permutation.push_back(u);
//     //     generatePermutations(permutation, i + 1, s);
//     //     permutation.pop_back();
//     // }
// }

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

    // string permutation;
    // generatePermutations(permutation, 0, s);
    generatePermutations(0, s);

    for (auto it : permutations)
        cout << it << endl;

    return 0;
}