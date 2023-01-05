#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp;
    std::vector<int>party;
    while(cin >> n)
    {
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            party.push_back(tmp);
        }
        sort(party.begin(),party.end());
        cout << n/2 << " " << party[n/2]-party[n/2-1] << endl;
        party.clear();
    }


    return 0;
}
