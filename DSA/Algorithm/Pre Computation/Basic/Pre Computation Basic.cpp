///Given T test cases, in each test cases N is given.
///Print the factorial of N in each test cases % M, where M=10^9 + 7.
///Constrains:
///     1<= T,N <=10^5
/// Time: 1s


#include<bits/stdc++.h>
using namespace std;

const int M = 10e9 + 7;
const int N = 10e5 + 10;

long long int fact[N];

int main()
{
    fact[0]=fact[1]=1;
    for(long long int i=2; i<N; i++)
        fact[i]=fact[i-1]*i;
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cout << fact[n] << "\n";
    }

    ///Complexity: O(N) + O(T) = 2*(10^5)
}
