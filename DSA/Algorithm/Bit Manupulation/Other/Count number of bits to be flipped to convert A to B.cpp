#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Count number of bits to be flipped to convert A to B
    long long int a, b, x_or, c;

    cin >> a >> b;
    c=0;

    x_or=a^b;

    while(x_or>0)
    {
        c++;
        x_or&=(x_or-1);
    }

    cout << c << "\n";
    return 0;
}
