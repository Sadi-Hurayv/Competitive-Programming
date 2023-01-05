#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k, n, sum;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        vector<int>b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for(int i=0, j=0, c=0; i<n, j<n, c<k; )
        {
            if(a[i]<b[j])
            {
                swap(a[i],b[j]);
                i++;
                j++;
                c++;
            }
            else
                break;
        }

        sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        cout << sum << "\n";
    }

    return 0;
}
