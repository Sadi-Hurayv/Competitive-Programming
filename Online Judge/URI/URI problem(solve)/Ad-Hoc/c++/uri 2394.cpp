#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, tmp, sum;
    std::map<int ,int>race;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<m; j++)
        {
            cin >> tmp;
            sum+=tmp;
        }
        race.insert(pair<int, int>(sum, i));
    }

    cout << race.begin()->second+1 << endl;

    return 0;
}
