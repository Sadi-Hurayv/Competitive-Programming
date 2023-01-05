#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int arr[t], sum=0;
    for(int i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
        //printf("A");
        sum+=arr[i];
    }
    printf("%lld",sum);
    return 0;
}

