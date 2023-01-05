#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if(min(n,m)%2)
        cout << "Akshat";
    else
        cout << "Malvika";

    return 0;
}
