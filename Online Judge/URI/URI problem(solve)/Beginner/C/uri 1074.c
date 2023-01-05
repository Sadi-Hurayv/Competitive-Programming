#include<stdio.h>
int main()
{
    int num, i;
    scanf("%d",&num);
    int arr[num];

    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<num; i++)
    {
        if(arr[i]==0)
            printf("NULL\n");
        else if(arr[i]<0 && arr[i]%2==0)
            printf("EVEN NEGATIVE\n");
        else if(arr[i]<0 && arr[i]%2!=0)
            printf("ODD NEGATIVE\n");
        else if(arr[i]>0 && arr[i]%2==0)
            printf("EVEN POSITIVE\n");
        else if(arr[i]>0 && arr[i]%2!=0)
            printf("ODD POSITIVE\n");
    }
    return 0;
}
