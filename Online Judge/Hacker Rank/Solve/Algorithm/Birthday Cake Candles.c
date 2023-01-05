#include<stdio.h>
int main()
{
    int n, c=0;
    scanf("%d",&n);
    long int arr[n], max;

    scanf("%ld",&arr[0]);
    max=arr[0];
    c=1;

    for(int i=1; i<n; i++)
    {
       scanf("%ld",&arr[i]);
       if(arr[i]>max)
       {
           max=arr[i];
           c=1;
       }
       else if(arr[i]==max)
       {
           c++;
       }
    }
    printf("%d",c);
    return 0;
}
