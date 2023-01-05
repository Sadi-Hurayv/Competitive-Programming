#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v;
        for(int j=0; j<n; j++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());
        cout << v[0]+v[1] << "\n";
    }

    return 0;
}
