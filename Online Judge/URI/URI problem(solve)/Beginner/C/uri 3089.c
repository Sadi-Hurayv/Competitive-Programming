#include<stdio.h>
int main()
{
    int n, i;
    while(scanf("%d",&n) && n!=0)
    {
        long long int arr[2*n], sum[n], max, min;
        for(i=0; i<2*n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            sum[i]=arr[i]+arr[2*n-1-i];
            if(i==0)
            {
                max=sum[i];
                min=sum[i];
            }
            else
            {
                if(sum[i]>max)
                {
                    max=sum[i];
                }
                if(sum[i]<min)
                {
                    min=sum[i];
                }
            }
        }
        printf("%lld %lld\n",max,min);
    }

    return 0;
}
