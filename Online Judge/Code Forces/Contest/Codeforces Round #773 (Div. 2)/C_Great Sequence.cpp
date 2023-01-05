#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, x, c;
    cin >> t;

    while(t--)
    {   map<long long int, long long int> frq;
        cin >> n >> x;
        long long int arr[n];
        c=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }

        sort(arr, arr+n);

        for(int i=0; i<n; i++)
        {
            if(frq[arr[i]])
            {
                if(frq[arr[i]*x])
                    frq[arr[i]*x]--;
                else
                    c++;
                frq[arr[i]]--;
            }
        }

        cout << c << "\n";
    }

    return 0;
}
