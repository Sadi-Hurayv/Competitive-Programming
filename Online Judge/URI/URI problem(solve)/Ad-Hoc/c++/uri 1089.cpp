#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, oldck, nwck, k, temp, c;

    while(cin >> n, n!=0)
    {
        int arr[n];
        k=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        c=0;
        for(int i=0; i<n-1; i++)
        {
            if(i<=k)
            {
                if(arr[i+1]>arr[i])
                {
                    oldck=1;
                    nwck=1;
                }
                else if(arr[i+1]<arr[i])
                {
                    oldck=0;
                    nwck=0;
                }
                else
                {
                    k++;
                }
            }
            else
            {
                if(arr[i+1]>arr[i])
                {
                    temp=nwck;
                    nwck=1;
                    oldck=temp;

                }
                else if(arr[i+1]<arr[i])
                {
                    temp=nwck;
                    nwck=0;
                    oldck=temp;
                }
                else
                {
                    continue;
                }
                if(nwck!=oldck)
                {
                    c++;
                }
            }
        }
        if(c%2==0)
            cout << (c+2) << endl;
        else
            cout << (c+1) << endl;
    }
}
