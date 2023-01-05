#include<bits/stdc++.h>
using namespace std;

int arr[110][110];
int main()
{
    long long int r, c, mn, rem, sum=0;
    cin >> r >> c;

    mn=INT_MAX;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr[i][j];
            sum+=arr[i][j];
            if(arr[i][j]<mn)
                mn=arr[i][j];
        }
    }

//    for(int i=0; i<r; i++)
//    {
//        for(int j=0; j<c; j++)
//        {
//            if(arr[i][j]>mn)
//                rem+=(arr[i][j]-mn);
//        }
//    }

    cout << sum-(mn*r*c) << "\n";


    return 0;
}
