#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, orng, sum;
    sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> orng;
        sum+=orng;
    }
    double ans;
    ans=(double)sum/n; /// (sum*100)/(n*100) %
    cout << setprecision(12) << ans << "\n";

    return 0;
}
