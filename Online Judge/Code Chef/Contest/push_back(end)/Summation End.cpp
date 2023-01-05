#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n;

    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int sum=0;
        int tmp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp%6==0)
            {
                sum+=6;
            }
            else
            {
                sum+=tmp%6;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
