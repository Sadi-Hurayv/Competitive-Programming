#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, tmp, ans, f;
    multiset <long long int> pla, arr;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        pla.insert(tmp);
    }

    f=0;
    for(int i=0; i<n+1; i++)
    {

        cin >> tmp;
        if(f)
        {
            continue;
        }

        auto it=pla.find(tmp);
        if(it==pla.end())
        {
            ans=tmp;
            f=1;
        }
        else
        {
            pla.erase(it);
        }
    }

    cout << ans << "\n";

    return 0;
}
