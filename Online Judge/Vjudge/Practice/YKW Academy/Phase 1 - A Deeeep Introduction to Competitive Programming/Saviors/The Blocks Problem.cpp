#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"


// move to initial
void move_to_initial(vector<vector<ll>> &blocks, vector<ll> &v, vector<ll> &h, ll x)
{
    ll ver = v[x];
    ll hor = h[x];
    for (ll i = ver + 1; i < blocks[hor].size(); i++)
    {
        ll ele = blocks[hor][i];
        h[ele] = ele;
        v[ele] = 0;
    }
    blocks[hor].resize(ver + 1);
}

// move a onto b
void move_onto(vector<vector<ll>> &blocks, vector<ll> &v, vector<ll> &h, ll a, ll b, bool resize)
{
    ll a_hor = h[a];
    ll b_hor = h[b];
    ll a_ver = v[a];
    ll b_ver = v[b];

    blocks[b_hor].push_back(a);
    if (resize)
        blocks[a_hor].resize(a_ver);

    h[a] = h[b];
    v[a] = blocks[b_hor].size() - 1;
}

// pile a onto b
void pile_onto(vector<vector<ll>> &blocks, vector<ll> &v, vector<ll> &h, ll a, ll b)
{
    ll a_hor = h[a];
    ll b_hor = h[b];
    ll a_ver = v[a];
    ll b_ver = v[b];
    bool resize = false;

    for (ll i = a_ver; i < blocks[a_hor].size(); i++)
    {
        ll cur_a = blocks[a_hor][i];
        ll cur_b = blocks[b_hor][b_ver];

        move_onto(blocks, v, h, cur_a, cur_b, resize);
        b_ver++;
    }

    blocks[a_hor].resize(a_ver);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n;
    cin >> n;

    vector<vector<ll>> blocks(n);
    vector<ll> v(n, 0), h(n);
    for (ll i = 0; i < n; i++)
    {
        blocks[i].push_back(i);
        h[i] = i;
    }

    string op, pos;
    ll a, b;

    while (cin >> op && op != "quit")
    {
        cin >> a >> pos >> b;
        if (h[a] == h[b])
            continue;

        if (op == "move")
        {
            bool resize = true;
            if (pos == "onto")
            {
                move_to_initial(blocks, v, h, a);
                move_to_initial(blocks, v, h, b);
                move_onto(blocks, v, h, a, b, resize);
            }
            else if (pos == "over")
            {
                move_to_initial(blocks, v, h, a);
                move_onto(blocks, v, h, a, b, resize);
            }
        }
        else if (op == "pile")
        {
            if (pos == "onto")
            {
                move_to_initial(blocks, v, h, b);
                pile_onto(blocks, v, h, a, b);
            }
            else if (pos == "over")
            {
                pile_onto(blocks, v, h, a, b);
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << i << ":";
        for (auto it : blocks[i])
            cout << " " << it;
        cout << endl;
    }

    return 0;
}