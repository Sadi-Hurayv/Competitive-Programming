#include<stdio.h>
int binary_search(int find, int size, int arr[]);
int main()
{
    int n, fnum, low, mid, high, count=0;

    printf("Enter the number of the elements :");
    scanf("%d",&n);
    int  aray[n];

    printf("Enter the elements below.\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&aray[i]);
    }

    printf("Enter the number you want to find :" );
    scanf("%d",&fnum);
    ///binary_search(fnum,n,aray);


    int pos=binary_search(fnum,n,aray);
    if(pos==-1)
        printf("Position not found!!");
    else
        printf("position : %d",pos+1);



    return 0;
}

int binary_search(int find, int size, int arr[])
{
    int low, high, mid;
    low=0;
    high=size-1;

    while(low<=high)
    {
        mid=low+(high-low)/2;     ///(high+low)/2   sometimes may overflow the integer if high and low is very big
        if(find<arr[mid])
            high=mid-1;
        else if(find>arr[mid])
            low=mid+1;
        else
        {
            return mid;
        }

        if(low>high)
            return -1;
    }
}


