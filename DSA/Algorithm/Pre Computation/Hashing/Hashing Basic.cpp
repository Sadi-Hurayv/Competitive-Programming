///Given an array A[] of N integers. Given Q queries.
/// In each queries print the count of X.
///Constrains:
///     1<= N, Q <=10^5
///     1<= A[i] <=10^7
/// Time: 1s


#include<bits/stdc++.h>
using namespace std;

const int N = 10e5 + 10;
long long int hsh[N];

int main()
{
    int tmp, n, q, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >>tmp;
        hsh[tmp]++;
    }

    cin >> q;
    while(q--)
    {
        cin >> x;
        cout << hsh[x] << "\n";
    }
    ///Complexity: O(N) + O(Q) = 2*(10^5)

}

