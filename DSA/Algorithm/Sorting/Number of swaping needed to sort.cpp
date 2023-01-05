#include<bits/stdc++.h>
using namespace std;

int num_swap=0;
void marge(int left[], int ln, int right[], int rn, int arr[])
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
            num_swap+=ln-i;
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
}

void marge_sort(int arr[], int n)
{
    int mid;
    if(n<2)
    {
        return;
    }
    mid=n/2;
    int left[mid], right[n-mid];
    for(int i=0; i<mid; i++) left[i]=arr[i];
    for(int i=mid; i<n; i++) right[i-mid]=arr[i];
    marge_sort(left, mid);
    marge_sort(right, n-mid);
    marge(left, mid, right, n-mid, arr);
}

void count_swap(int arr[], int n)
{
    return marge_sort(arr,n);
}

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

    count_swap(arr, s);


    printf("The sorted array is : ");
    for(int i=0; i<s; i++)
    {
        printf("%d  ",arr[i]);
    }

    cout << "\nNumber of swapping: " << num_swap << "\n";

    return 0;
}
