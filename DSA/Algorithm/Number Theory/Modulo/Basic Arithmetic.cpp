#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, m;
    cin >> a >> b >> m;

    cout << "(a + b) % m = ((a % m) + (b % m)) % m =    " << ((a % m) + (b % m)) % m << endl;
    cout << "((-b) % m) = (((- b) % m) + m) % m = " << (((-b) % m) + m) % m << endl;
    cout << "(a - b) % m = ((a % m) + ((-b) % m) + m) % m = " << ((a % m) + ((-b) % m) + m) % m << endl;
    cout << "(a x b) % m = ((a % m) x (b % m)) % m = " << ((a % m) * (b % m)) % m << endl;

    // cout << -10 % 3 << endl;

    return 0;
}