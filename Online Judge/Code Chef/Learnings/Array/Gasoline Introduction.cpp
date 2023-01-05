#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sum=0;
        int arr[n];
        int c=0;

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++)
        {
            if(i!=0)
            {
                sum--;
                c++;
            }

            sum+=arr[i];
            if(!sum)
                break;
        }

        cout << c+sum << "\n";
    }

    return 0;
}
