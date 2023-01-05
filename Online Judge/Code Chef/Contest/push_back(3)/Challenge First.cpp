#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        int i_bo, j_bo;
        if(n%2==0)
        {
            i_bo=j_bo=n/2;
        }


        for(int i=0, j=1, k=0; k<n/2; i+=2, j+=2, k++)
        {
            if(k==(n/2)-1)
            {
                cout << arr[j] << " " << arr[i];
            }
            else
            {
                cout << arr[j] << " " << arr[i] << " ";
            }
        }
        if(n%2==1)
        {
            cout << " " << arr[n-1];
        }
        cout << "\n";
    }


    return 0;
}
