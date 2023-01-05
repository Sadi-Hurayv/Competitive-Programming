#include<stdio.h>
int main()
{
    int s, i, j, tr, val;
    scanf("%d",&s, printf("Enter the size of the array : "));
    int arr[s];
    printf("Enter the array : ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }

    /// sorting part
    for(i=1; i<s; i++)
    {
        tr=i;
        val=arr[i];
        while(tr>0 && arr[tr-1]>val)
        {
            arr[tr]=arr[tr-1];
            tr--;
        }
        arr[tr]=val;
    }

    /// printing the sorted array
    printf("The sorted array is : ");
    for(i=0; i<s; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
