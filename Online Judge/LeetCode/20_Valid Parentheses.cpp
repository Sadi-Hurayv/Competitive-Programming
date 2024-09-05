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

bool validParentheses(string s)
{
    if (s.length() % 2 != 0)
        return false;

    stack<char> parentheses;

    // an inovative way to solve
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            parentheses.push(')');
        else if (s[i] == '{')
            parentheses.push('}');
        else if (s[i] == '[')
            parentheses.push(']');
        else
        {
            if (parentheses.empty() || parentheses.top() != s[i])
                return false;
            else
                parentheses.pop();
        }
    }

    return parentheses.empty();

    // for(int i=0; i<s.length(); i++)
    // {
    //     if(s[i]=='(' || s[i]=='{' || s[i]=='[')
    //         parentheses.push(s[i]);
    //     else
    //     {
    //         if( (!parentheses.empty()) && ( (s[i]==')' && parentheses.top()=='(') || (s[i]=='}' && parentheses.top()=='{') || (s[i]==']' && parentheses.top()=='[') ) )
    //         {
    //             parentheses.pop();
    //         }
    //         else
    //             return false;
    //     }
    // }

    // return parentheses.empty();
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
    string s;

    cin >> s;
    cout << validParentheses(s) << endl;

    return 0;
}