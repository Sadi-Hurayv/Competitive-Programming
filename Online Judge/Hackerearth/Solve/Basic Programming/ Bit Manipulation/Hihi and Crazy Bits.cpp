#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, t, res;

    cin >> t;
    while(t--)
    {
        cin >> n;
        res=n | (n+1);
        cout << res << "\n";
    }


    return 0;
}
