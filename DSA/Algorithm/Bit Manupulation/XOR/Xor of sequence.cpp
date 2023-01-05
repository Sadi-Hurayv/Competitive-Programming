#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << (0 ^ 1) << endl;
    cout << (0 ^ 1 ^ 2) << endl;
    cout << (0 ^ 1 ^ 2 ^ 3) << endl;
    cout << (0 ^ 1 ^ 2 ^ 3 ^ 4) << endl
         << endl;

    cout << (4 ^ 5) << endl;
    cout << (4 ^ 5 ^ 6) << endl;
    cout << (4 ^ 5 ^ 6 ^ 7) << endl;
    cout << (4 ^ 5 ^ 6 ^ 7 ^ 8) << endl
         << endl;

    /*
     *   The XOR of consoqueative sequential pair of even and odd(1st one is even and 2nd one is odd) is 1.
     *   Ex. (0^1)=(2^3)=(4^5)=(6^7)=1
     *
     *   So, XOR of such 2 pair will be 0.
     *   Ex. (0^1^2^3)=(4^5^6^7)=0
     */

    return 0;
}