#include<stdio.h>
int main()
{
    int n ,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        arr[a-1]=i+1;
    }

    for(int i=0; i<n; i++)
    {
        if(i<n-1)
            printf("%d\n",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}
