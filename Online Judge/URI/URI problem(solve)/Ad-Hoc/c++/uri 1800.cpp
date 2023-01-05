#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e, tmp;
    cin >> n >> e;
    std::set<int>key;
    for(int i=0; i<e; i++)
    {
        cin >> tmp;
        key.insert(tmp);
    }
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(find(key.begin(), key.end(), tmp)!=key.end())
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
        key.insert(tmp);
    }

    return 0;
}
