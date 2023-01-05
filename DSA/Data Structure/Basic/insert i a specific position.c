#include<stdio.h>
int main()
{
    int arr[6]={1,5,9,-10,6};
    int insert = 3, pos = 3, temp1, temp2;

    temp1 = arr[3];
    arr[3]=insert;
    for(int i=pos+1; i<=5; i++)
    {
        temp2 = arr[i];

        arr[i+1]=arr[i];

    }
    for(int i=0; i<=5; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
