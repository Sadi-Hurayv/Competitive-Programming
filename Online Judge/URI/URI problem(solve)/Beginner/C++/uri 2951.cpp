#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, g, sum=0, val, x;
    char rune;
    cin >> n >> g;
    std::map<char,int>rune_val;
    for(int i=0; i<n; i++)
    {
        cin >> rune >> val;
        rune_val.insert(pair<char,int>(rune,val));
    }

    cin >> x;
    for(int i=0; i<x; i++)
    {
        cin >> rune;
//        cout << rune;
        auto it = rune_val.find(rune);
        sum+=it->second;
    }

    cout << sum << endl;
    if(sum>=g)
    {
        cout << "You shall pass!" << endl;
    }
    else
    {
        cout << "My precioooous" << endl;
    }

    return 0;
}

