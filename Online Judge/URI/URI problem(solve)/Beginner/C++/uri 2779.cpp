#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, tmp;
    std::set<int>card;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> tmp;
        card.insert(tmp);
    }
    cout << n-card.size() << endl;
    return 0;
}
