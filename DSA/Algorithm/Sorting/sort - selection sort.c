#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d",&n,printf("Enter the size of the array : \a"));
    int arr[n];
    printf("Enter the array of size %d : \a\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++)
    {
        int imin=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[imin])
                imin=j;
        }
        int temp;
        temp=arr[imin];
        arr[imin]=arr[i];
        arr[i]=temp;
    }

    printf("The sorted list is : ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n\a");
    return 0;
}
