#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, mx;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        mx=0;
        cin >> n;
        std::vector<int>num(n);
        for(int j=0; j<n; j++)
        {
            cin >> num[j];
        }
        std::unordered_map<int, int>team;
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                team[num[j]+num[k]]++;
            }
        }
        for(auto ele:team)
        {
            if(ele.second > mx)
                mx=ele.second;
        }
        cout << mx << endl;
        team.clear();
    }

    return 0;
}
