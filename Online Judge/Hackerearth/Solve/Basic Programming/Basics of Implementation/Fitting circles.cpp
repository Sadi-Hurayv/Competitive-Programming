#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        cout << max(x,y)/min(x,y) << "\n";
    }

    return 0;
}
