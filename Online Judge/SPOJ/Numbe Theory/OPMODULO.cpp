#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int l, r, res, tmp;
    cin >> l >> r;

    tmp=1;

    while(tmp<l)
        tmp*=2;

    res=0;
    while(tmp<=r)
    {
        res+=tmp;
        tmp*=2;
    }
    cout << res << "\n";
    return 0;
}
