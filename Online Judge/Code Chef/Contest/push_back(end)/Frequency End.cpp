#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, tmp;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        unordered_map<int, int>mp;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            mp[tmp]++;
        }

        for(auto it=mp.begin(); it!=mp.end(); ++it)
        {
            if(it->second >m)
                v.push_back(it->first);
        }

        sort(v.begin(), v.end());

        for(auto it=v.begin(); it!=v.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << "\n";
    }
    return 0;
}
