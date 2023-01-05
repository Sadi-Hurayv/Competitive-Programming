#include<bits/stdc++.h>
using namespace std;
long long int arr[100010];
int main()
{
    long long int sum, tmp;
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sum=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            for(int j=1; j<=k && i+j<n && arr[i]!=0; j++)
            {
                if(arr[i+j]<0)
                {
                    if(arr[i]>=abs(arr[i+j]))
                    {
                        arr[i]+=arr[i+j];
                        arr[i+j]=0;
                    }
                    else if(arr[i]<=abs(arr[i+j]))
                    {
                        arr[i+j]+=arr[i];
                        arr[i]=0;
                    }
                }
            }
        }
//        else if(arr[i]<0)
//        {
//            for(int j=1; j<=k && arr[i]!=0; j++)
//            {
//                if(arr[i+j]>0)
//                {
//                    if(abs(arr[i])>=arr[i+j])
//                    {
//                        arr[i]+=arr[i+j];
//                        arr[i+j]=0;
//                    }
//                    else if(abs(arr[i])<=arr[i+j])
//                    {
//                        arr[i+j]+=arr[i];
//                        arr[i]=0;
//                    }
//                }
//            }
//        }
        sum+=abs(arr[i]);
    }

//    for(int i=0; i<n; i++)
//    {
//        cout << arr[i] << "\n";
//    }
    cout << sum;

    return 0;
}
