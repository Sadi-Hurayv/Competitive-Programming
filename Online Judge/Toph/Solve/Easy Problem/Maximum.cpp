#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, mx;
    cin >> n;
    mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(tmp>mx)
        {
            mx=tmp;
        }
    }
    cout << mx << endl;
    return 0;
}
