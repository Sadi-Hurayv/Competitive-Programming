#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;

    cin >> n >> k;
    vector<ll> spl(10e5 + 10);

    int sp;
    for(int i=0; i<n; i++)
        cin >> sp, spl[sp]=1;

    int id, pp;
    string s;
    map<ll, string, greater<ll> > sfp, nfp;
    while(k--)
    {
        cin >> id >> pp >> s;
        if(spl[id])
            sfp.insert(make_pair(pp, s));
        else
            nfp.insert(make_pair(pp, s));
    }

    for(auto it : sfp)
        cout << it.second << "\n";
    for(auto it : nfp)
        cout << it.second << "\n";

    return 0;
}
