#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> x;
        vector< pair<int, int> > vt;

        int tmp;
        for(int i=1; i<=n; i++)
            cin >> tmp, vt.push_back(make_pair(tmp, i));

        sort(vt.begin(), vt.end(), greater< pair<int, int> >() );

        int c=0;
        set<int> st;
        for(int i=0; i<n; i++)
            if(vt[i].first>=m || c<x)
                c++, st.insert(vt[i].second);

        cout << st.size();
        for(auto it : st)
            cout << " " << it;
        cout << "\n";
    }

    return 0;
}
