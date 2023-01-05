#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, l1, l2;
    cin >> n;

    if(n<0)
    {
        l1=(n%10)*(-1);
        n=n/10;

        l2=(n%10)*(-1);

        if(l2>l1)
            n=n+l2-l1;
    }

    cout << n;

    return 0;
}
