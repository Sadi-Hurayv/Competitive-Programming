#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list.

    long long int n, x;

    cin >> n;
    vector<long long int> v(n-1);

    x=1;
    for(int i=2; i<=n; i++)
    {
        x^=i;
        cin >> v[i-2];
        x^=v[i-2];
    }

    cout << x << "\n";

//    long long int tot=1;
//    for(int i=2; i<=n; i++)
//    {
//        tot+=i;
//        cin >> v[i-2];
//        tot-=v[i-2];
//    }
//
//    cout << tot << "\n";

    return 0;
}
