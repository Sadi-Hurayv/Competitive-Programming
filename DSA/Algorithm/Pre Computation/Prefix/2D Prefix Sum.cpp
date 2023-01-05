/// Given a 2D array A of N*N elements, Given Q queries and in each query a, b, c and d are given;
/// Print the sum of the square from the array Re[resented by (a,b) as top left point and (c,d) as bottom right point.
/// Constrains:
///     1 >= N >= 10e3
///     1 >= Q >= 10e5
///     1 >= A[i][j] >= 10e9
///     1 >= a,b,c,d >= N

#include<bits/stdc++.h>
using namespace std;
const int N = 10e3 + 10;
long long int prfx[N][N];

int main()
{
    int n, q, a, b, c, d;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> prfx[i][j];
            prfx[i][j] += prfx[i-1][j] + prfx[i][j-1] - prfx[i-1][j-1]; ///pf[i][j]+=pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1]
        }
    }
    cin >> q;
    while(q--)
    {
        cin >> a >> b >> c >> d;
        cout << prfx[c][d] - prfx[a-1][d] - prfx[c][b-1] + prfx[a-1][b-1] << "\n"; ///pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]
    }

    ///complexity: O(N) + O(Q) = 2*(10e5)

    return 0;
}

