#include<stdio.h>
int main()
{
    int t, i, ind;
    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<t-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            ind=i+2;
            break;
        }
        else
            ind=0;
    }
    printf("%d\n",ind);
    return 0;
}
