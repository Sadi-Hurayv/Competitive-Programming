#include<stdio.h>
int main()
{
    int i, arr[5], pos;
    printf("Enter the array :");
    for(i=0; i<5; i++)
        scanf("%d",&arr[i]);
    printf("Enter  the position :");
    scanf("%d",&pos);
    for(i=pos-1; i<5-1; i++)
        arr[i]=arr[i+1];
    for(i=0; i<5-1; i++)
        printf("%d ",arr[i]);
}
