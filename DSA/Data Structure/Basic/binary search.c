#include<stdio.h>
int main()
{
    int n, fnum, low, mid, high, count=0;

    printf("Enter the number of the elements :");
    scanf("%d",&n);
    int  aray[n], pos[n];

    printf("Enter the elements below.\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&aray[i]);
    }

    printf("Enter the number you want to find :" );
    scanf("%d",&fnum);

    low=0;
    high=n-1;

    //printf("low\tMid\thigh");

    while(low<=high)
    {
        mid=low+(high-low)/2;     ///(high+low)/2   sometimes may overflow the integer if high and low is very big
        //printf("\n%d\t%d\t%d",low,mid,high);
        if(fnum<aray[mid])
            high=mid-1;
        else if(fnum>aray[mid])
            low=mid+1;
        else
        {
            printf("\nposition : %d",mid+1);
            break;
        }
        //mid=(low+high)/2;
        if(low>high)
            printf("Position not found!!");
    }

    return 0;
}

