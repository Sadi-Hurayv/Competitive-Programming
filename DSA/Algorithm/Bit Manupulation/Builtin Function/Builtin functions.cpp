#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long int x, y, k;
    cin >> x; 
    cout << x << " : " << bitset<32>(x) << endl;

    cout << "popcount : " << __builtin_popcount(x) << endl; // Number of set bit
    // __builtin_popcountl(x) // for long
    // __builtin_popcountll(x) // for long long
    
    cout << "parity : " << __builtin_parity(x) << endl;     // Returns true(1) if the number has odd parity(Odd number of 1s)
                                                            // else it returns false(0) for even parity(even number of 1s).
    // __builtin_parityl(x) // for long
    // __builtin_parityll(x) // for long long
    
    cout << "clz : " << __builtin_clz(x) << endl;           // Number of leading zero
    // __builtin_clz(x)l(x) // for long
    // __builtin_clz(x)ll(x) // for long long

    cout << "ctz : " << __builtin_ctz(x) << endl;           // Number of trailing zero
    // __builtin_ctz(x)l(x) // for long
    // __builtin_ctz(x)ll(x) // for long long

    return 0;
}