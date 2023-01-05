/// Given an array A of N elements, Given Q queries and in each query L and R is given;
/// Print the sum of the array from L index to R index inclusive.
/// Constrains:
///     1 >= N, Q >= 10e5
///     1 >= A[i] >= 10e9
///     1 >= L, R >= N

#include<bits/stdc++.h>
using namespace std;
const int N = 10e5 + 10;
long long int prfx[N];

int main()
{
    int n, q, l, r;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> prfx[i];
        prfx[i]+=prfx[i-1]; ///pf[i]+=pf[i-1]

    }
    cin >> q;
    while(q--)
    {
        cin >> l >> r;
        cout << prfx[r]-prfx[l-1] << "\n";   ///pf[r]-pf[l-1]
    }

    ///complexity: O(N) + O(Q) = 2*(10e5)

    return 0;
}
