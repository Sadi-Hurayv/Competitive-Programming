#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tem;
    std::multiset<int>even;
    std::multiset<int, greater<int> >odd;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tem;
        if(tem%2==0)
        {
            even.insert(tem);
        }
        else
        {
            odd.insert(tem);
        }
    }

    ///even
    for(auto it=even.begin(); it!=even.end(); ++it)
    {
        cout << *it << endl;
    }
    ///odd
    for(auto it=odd.begin(); it!=odd.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
