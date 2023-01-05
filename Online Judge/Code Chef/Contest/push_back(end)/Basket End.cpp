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
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            s.insert(tmp);
        }

        for(int i=0; i<m; i++)
        {
            cin >> tmp;
            auto it=s.find(tmp);
            if(it==s.end())
            {
                s.insert(tmp);
            }
            else
            {
                s.erase(it);
            }
        }

        for(auto it=s.begin(); it!=s.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << "\n";

    }
    return 0;
}
