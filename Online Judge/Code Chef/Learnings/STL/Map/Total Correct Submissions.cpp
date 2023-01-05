#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<string, int> mp;
        multimap<int, string> mp1;
        int sol;
        string s;
        for(int i=0; i<3*n; i++)
        {
            cin >> s >> sol;
            mp[s]+=sol;
        }

        for(auto it : mp)
            mp1.insert(make_pair(it.second, it.first));

        for(auto it : mp1)
            cout << it.first << " ";
        cout << "\n";

    }
    return 0;
}
