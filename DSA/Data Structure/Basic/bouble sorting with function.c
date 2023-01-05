#include<stdio.h>
int bouble_sort(int arr[]);
int main()
{
    int i, aray[5];
    printf("Enter the array of 5 element:");
    for(i=0; i<5; i++)
        scanf("%d",&aray[i]);

    bouble_sort(aray);

    for(i=0; i<5; i++)
        printf("%d ",aray[i]);
}

int bouble_sort(int arr[])
{
    int i, j, swa, f;
    for(i=0; i<5-1; i++)
    {
        f=0;
        for(j=0; j<5-1-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
                f=1;
            }
        }
        if(f==0)
            break;
    }
}
