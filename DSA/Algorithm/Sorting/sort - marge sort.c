#include<stdio.h>
int main()
{
    int s, i;
    scanf("%d",&s,printf("Enter the size of the array : "));
    int arr[s];
    printf("Enter the array : ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,s);

    printf("The sorted array is : ");
    for(int i=0; i<s; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}

void merge_sort(int arr[], int n)
{
    if(n<2)
    {
        return;
    }
    int mid=n/2;
    int left[mid], right[n-mid];
    for(int i=0; i<mid; i++)
    {
        left[i]=arr[i];
    }
    for(int i=mid; i<n; i++)
    {
        right[i-mid]=arr[i];
    }
    merge_sort(left, mid);
    merge_sort(right, n-mid);
    merge(left, mid, right, n-mid, arr);
}

void merge(int left[], int ln, int right[], int rn, int arr[])
{
    int i=0, j=0, k=0;
    while(i<ln && j<rn)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<ln)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rn)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    for(int p=0; p<ln+rn; p++)
    {
        printf("%d - ",arr[p]);
    }
    printf("\n");
}
