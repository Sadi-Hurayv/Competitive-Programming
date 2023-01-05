#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, flag;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        flag=1;
        cin >> n;
        std::vector<int>num(n);
        for(int j=0; j<n; j++)
        {
            cin >> num[j];
        }
        sort(num.begin(), num.end());
        for(int j=0; j<n-1; j++)
        {
            if(abs(num[j]-num[j+1])>1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
