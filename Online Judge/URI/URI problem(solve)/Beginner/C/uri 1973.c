#include<stdio.h>
int main()
{
    long long int t, raids=0, even=0, odd=0, i, sum=0;
    scanf("%lld",&t);
    long long int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<t && i>=0; )
    {
        if(arr[i]%2==0)
        {
            if(arr[i]!=0)
                arr[i]-=1;
            i--;
            even++;
        }
        else
        {
            if(arr[i]!=0)
                arr[i]-=1;
            i++;
            odd++;
        }


        if(even==1)
            raids=i+2;
        else if(even>1)
            continue;
        else if(odd==t)
            raids=t;

    }
    for(i=0; i<t; i++)
        sum+=arr[i];
    printf("%lld %lld\n",raids,sum);
    return 0;
}
