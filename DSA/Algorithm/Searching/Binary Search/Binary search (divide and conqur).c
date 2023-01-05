#include <stdio.h>

int binarySearch(int arr[], int l, int r, int fi)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == fi)
            return mid;

        if (arr[mid] > fi)
            return binarySearch(arr, l, mid - 1, fi);

        return binarySearch(arr, mid + 1, r, fi);
    }


    return -1;
}

int main()
{
    int arr[5], i;
    int n=5;  /// size

    printf("Enter the array of size 5 : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int f;
    scanf("%d",&f,printf("Enter the element to find : "));

    int result = binarySearch(arr, 0, n - 1, f);

    if(result==-1)
    {
        printf("Not present.\n");
    }
    else
    {
        printf("The element present at index %d\n",result+1);
    }


    return 0;
}

