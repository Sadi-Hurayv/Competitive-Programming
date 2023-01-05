#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v, a, r, p, h;
    cin >> v >> a >> r >> p >> h;

    if((v+a+r)>=h || (v+r+p)>=h || (a+r+p)>=h || (v+a+p)>=h)
    {
        cout << "WAW";
    }
    else
    {
        cout << "AWW";
    }

    return 0;
}

