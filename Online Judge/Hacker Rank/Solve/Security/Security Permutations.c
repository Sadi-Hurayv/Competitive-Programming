#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n], ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(i<n-1)
            printf("%d\n",arr[arr[i]-1]);
        else
            printf("%d",arr[arr[i]-1]);
    }
    return 0;
}
