#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t, n, tmp;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        int arr[n];

        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }



        for(int j=0; j<n; j++)
        {
            if(j%2==0)
            {
                //arr[j/2]=tmp;
                tmp=arr[j/2];
            }
            else
            {
                //arr[n-(j/2)-1]=tmp;
                tmp=arr[n-(j/2)-1];
            }

            if(j==n-1)
            {
                cout << tmp << "\n";
            }
            else
            {
                cout << tmp << " ";
            }
        }
    }

    return 0;
}
