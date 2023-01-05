#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, n_s, n_p, tem, c=0;
    std::vector<int>v;
    std::set<int>s;
    std::set<int>::iterator it;

    cin >> n >> n_s >> n_p;

    ///Stamped card
    for(int i=0; i<n_s; i++)
    {
        cin >> tem;
        v.push_back(tem);
    }

    ///Purchased card
    for(int i=0; i<n_p; i++)
    {
        cin >> tem;
        s.insert(tem);
    }

    ///check
    for(int i=0; i<n_s; i++)
    {
        it=s.find(v[i]);
        if(it==s.end())
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
