#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Swap bits in a given number
    long long int x, p1, p2, n, t1, t2, x_or, res;
    cin >> x >> p1 >> p2 >> n;

    t1=(x >> (p1-1)) & ((1U << n)-1);
    t2=(x >> (p2-1)) & ((1U << n)-1);

    x_or=t1 ^ t2;
    x_or=(x_or << (p1-1)) | (x_or << (p2-1));
    res=x^x_or;

    cout << res << "\n";

    return 0;
}
