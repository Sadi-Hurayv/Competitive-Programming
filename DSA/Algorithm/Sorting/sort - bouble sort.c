#include<stdio.h>
int main()
{
    int i, arr[5], swa, j, c, f;
    printf("Enter the array :");
    for(i=0; i<5; i++)
        scanf("%d",&arr[i]);
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
        /*c=0;
        for(j=0; j<5-1; j++)
        {
            if(arr[j]>=arr[j+1])
                c++;
        }
        if(c==5-1)
            break;*/
    }
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
}
