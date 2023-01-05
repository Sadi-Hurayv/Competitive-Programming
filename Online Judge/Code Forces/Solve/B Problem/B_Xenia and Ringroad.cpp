#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, a, tm, pre=1;

    cin >> n >> m;
    tm=0;

    for(int i=0; i<m; i++)
    {
        cin >> a;
        if(a>=pre)
            tm+=a-pre;
        else
            tm+=n-(pre-a);

        pre=a;
    }

    cout << tm << "\n";

    return 0;
}
