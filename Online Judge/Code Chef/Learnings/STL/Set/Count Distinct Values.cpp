#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tmp, n;
    cin >> n;
    set<int> s;

    while(n--)
    {
        cin >> tmp;
        s.insert(tmp);
    }

    cout << "2\n" << s.size();
    // cout << "Hello\n";

    return 0;
}
