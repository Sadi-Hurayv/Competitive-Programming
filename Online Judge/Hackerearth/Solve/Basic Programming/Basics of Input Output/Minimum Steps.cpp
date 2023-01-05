#include<bits/stdc++.h>
using namespace std;

int solve(long long int k, long long int m, long long int n)
{
    if(k>=m)
        return ((k-m)/2)+((k-m)%2);
    if(m%n==0)
        return 1+solve(k,m/n,n);
    else
    {
        int x=n-(m%n);
        m+=x;
        return (x/2)+(x%2)+solve(k,m,n);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, m, k;
    cin >> t;
    while(t--)
    {
        cin >> k >> m >> n;
        cout << solve(k,m,n) << "\n";

    }
    return 0;
}
