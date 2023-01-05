#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /// Count set bits in an integer
    long long int a, b, x_or, c;

    cin >> a;
    c = 0;

    // for (int i = 0; i < 30; i++)
    // {
    //     if ((a >> i) & 1)
    //     {
    //         c++;
    //     }
    // }

    // while(a>0)
    // {
    //     c+=a&1;
    //     a=a >> 1;
    // }

    // Alternate to above.
    while (a)
    {
        a = a & (a - 1);
        c++;
    }

    cout << c << "\n";

    return 0;
}
