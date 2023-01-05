#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n, arr_a[100010], arr_b[100010], sum_a, sum_b, wd;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        wd=0;
        sum_a=0;
        sum_b=0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> arr_a[j];
        }
        for(int j=0; j<n; j++)
        {
            cin >> arr_b[j];
        }
        for(int j=0; j<n; j++)
        {
            if(sum_a==sum_b && arr_a[j]==arr_b[j])
            {
                wd+=arr_a[j];
            }
            sum_a+=arr_a[j];
            sum_b+=arr_b[j];
        }
        cout << wd << endl;
    }

    return 0;
}
