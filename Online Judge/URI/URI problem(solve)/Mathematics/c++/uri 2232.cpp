#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long long int sum;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        sum=0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            sum+=pow(2,j);
        }
        cout << sum << endl;
    }
    return 0;
}
