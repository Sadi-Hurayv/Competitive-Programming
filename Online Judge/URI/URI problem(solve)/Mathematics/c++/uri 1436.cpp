#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        std::vector<int>team(n);
        for(int j=0; j<n; j++)
        {
            cin >> team[j];
        }
        sort(team.begin(),team.end());
        cout << "Case " << i+1 << ": " << team[n/2] << endl;
    }

    return 0;
}
