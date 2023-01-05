#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, y, ans;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if(x>=0 && y>=0 && x>=y)
            cout << x << "\n";
        else
            cout << "-1\n";

    }
    return 0;
}
