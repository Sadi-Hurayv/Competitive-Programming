#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, tmp;
    cin >> n;
    set<int> v;
    cin >> p;
    for(int i=0; i<p; i++)
    {
        cin >> tmp;
        v.insert(tmp);
    }
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> tmp;
        v.insert(tmp);
    }

    if(v.size()==n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";


    return 0;
}
