#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,v,sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> t >> v;
        sum+=t*v;
    }
    cout << sum << endl;
    return 0;
}
