#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx=0, in, out, exist=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> out >> in;
        exist=exist-out+in;
        if(exist>mx)
            mx=exist;
    }
    cout << mx << endl;

    return 0;
}
