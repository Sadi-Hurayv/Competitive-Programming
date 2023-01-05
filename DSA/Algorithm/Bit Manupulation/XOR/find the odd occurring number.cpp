#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number.

    long long int n, a, res=0;
    cin >> n;
    vector<long long int>v(n);

    for(int i=0; i<n; i++)
    {
        cin >> a;
        v[i]=a;
    }

    for(int i=0; i<n; i++)
    {
        res^=v[i];
    }

    cout << res << "\n";


    return 0;
}

