#include<stdio.h>
int main()
{
    int i, ele, pos, arr[6], swa1, swa2;
    printf("Enter the array :");
    for(i=0; i<5; i++)
        scanf("%d",&arr[i]);
    printf("Enter  the position :");
    scanf("%d",&pos);
    printf("Enter  the element :");
    scanf("%d",&ele);
    /*swa1=arr[pos-1];
    arr[pos-1]=ele;
    for(i=pos; i<6; i++)
    {
        swa2=arr[i];
        arr[i]=swa1;
        swa1=swa2;
    }*/
    for(i=5; i>=pos; i--)
        arr[i]=arr[i-1];
    arr[pos-1]=ele;
    for(i=0; i<6; i++)
        printf("%d ",arr[i]);

}
