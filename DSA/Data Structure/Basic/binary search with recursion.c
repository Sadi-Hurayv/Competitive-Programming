#include<stdio.h>
int binary_search(int find, int low, int high, int arr[]);
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

    low=0;
    high=n-1;

    int pos=binary_search(fnum,low,high,aray);
    if(pos==-1)
        printf("Position not found!!");
    else
        printf("position : %d",pos+1);


    return 0;
}

int binary_search(int find, int low, int high, int arr[])
{
    int mid;

    while(low<=high)
    {
        if(low>high)
            return -1;

        mid=low+(high-low)/2;       ///(high+low)/2   sometimes may overflow the integer if high and low is very big

        if(find<arr[mid])
            return binary_search(find, low, mid-1, arr);
        else if(find>arr[mid])
            return binary_search(find, mid+1, high, arr);
        else
        {
            return mid;
        }
    }
}
