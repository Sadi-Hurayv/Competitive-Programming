#include<stdio.h>
int main()
{
    int arr[3],arra[3],i,j,swa;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        arra[i]=arr[i];
    }
    for(i=0; i<3-1; i++)
    {
        for(j=0; j<3-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",arra[i]);
    }

    return 0;

}
