#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pl pair<ll, ll>
#define vpl vector<pl>
#define pb push_back
#define f first
#define s second

bool compare(pl a, pl b)
{
    if(a.s>b.s)
        return true;
    else if(a.s==b.s)
        if(a.f<b.f)
            return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vpl pcv(n);

    for(int i=0; i<n; i++)
        cin >> pcv[i].f;
    for(int i=0; i<n; i++)
        cin >> pcv[i].s;

    sort(pcv.begin(), pcv.end(), compare);

    for(auto it : pcv)
        cout << it.f << " " << it.s << " ";

    return 0;
}
