#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<long long int> v(n);
        long long int pls=0, mns=0;

        for(int j=0; j<n; j++)
        {
            cin >> v[j];
            if(v[j]>0)
                pls+=v[j];
        }

        sort(v.begin(), v.end());

        for(int i=0; i<k; i++)
        {
            if(v[i]>=0)
                break;
            else
                mns+=(-1)*v[i];
        }
        cout << pls+mns << "\n";

    }

    return 0;
}



