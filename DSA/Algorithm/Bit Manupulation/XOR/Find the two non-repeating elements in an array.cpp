#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Given an array in which all numbers except two are repeated once. (i.e. we have 2n+2 numbers and n numbers are occurring twice and remaining two have occurred once).
    ///Find those two numbers in the most efficient way.

    ///OR

    ///Given an unsorted array that contains even number of occurrences for all numbers except two numbers. Find the two numbers which have odd occurrences.

    long long int n, a, x_or, x, y;
    cin >> n;
    vector<long long int>v(n);

    x_or=x=y=0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v[i]=a;
        x_or^=v[i];
    }

    x_or=x_or & ~(x_or-1);

    for(int i=0; i<n; i++)
    {
        if(x_or&v[i])
            x^=v[i];
        else
            y^=v[i];
    }

    cout << x << " " << y << "\n";

//    unordered_map<int, int> mp;
//
//    for(int i=0; i<n; i++)
//    {
//        cin >> a;
//        mp[a]++;
//        if(mp[a]%2==0) ///mp[a] & 1==0
//        {
//            mp.erase(a);
//        }
////        cout << mp[a] << "\n";
//    }
//
//    for(auto it=mp.begin(); it!=mp.end(); ++it)
//    {
//        cout << it->first << "\n";
//    }


    return 0;
}
