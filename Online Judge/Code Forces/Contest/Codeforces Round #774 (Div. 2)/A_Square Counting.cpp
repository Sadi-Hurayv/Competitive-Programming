#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t, s;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        cout << s/(n*n) << "\n";
    }



    return 0;
}
