#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int l, r, n, q;
    char ch;
    string sen, ten;
    bool ok, flg;

    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i], arr[i] = (arr[i] ^ arr[i - 1]);

    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << (arr[r] ^ arr[l - 1]) << endl;
    }

    return 0;
}