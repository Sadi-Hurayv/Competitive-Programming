#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>35 && (((arr[i]/5)+1)*5)-arr[i]<3)
        {
            arr[i]=((arr[i]/5)+1)*5;
        }
    }
    for(int i=0; i<t; i++)
    {
        if(i<t-1)
            printf("%d\n",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}
