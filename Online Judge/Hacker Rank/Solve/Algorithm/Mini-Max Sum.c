#include<stdio.h>
int main()
{
    unsigned long long int arr[5], mx, mn, sum;
    scanf("%lld",&arr[0]);
    sum=arr[0];
    mx=arr[0];
    mn=arr[0];
    for(int i=1; i<5; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]>mx)
            mx=arr[i];
        if(arr[i]<mn)
            mn=arr[i];
        sum+=arr[i];
    }


//    mx_sum=arr[1]+arr[2]+arr[3]+arr[4];
//    mn_sum=arr[0]+arr[1]+arr[2]+arr[3];
    printf("%lld %lld",sum-mx,sum-mn);
    return 0;
}
//
