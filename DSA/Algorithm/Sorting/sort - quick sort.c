#include<stdio.h>
int main()
{
    int i, s;
    scanf("%d",&s,printf("Enter the size of the array: "));
    int arr[s];
    printf("Enter the array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,s-1);
    printf("The sorted list is : ");
    for(i=0; i<s; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}

int quick_sort(int arr[], int start, int end)
{
    if(start<end)
    {
        int p;
        p=partition(arr, start, end);
        quick_sort(arr, start, p-1);
        quick_sort(arr, p+1, end);

    }
}

void iterative_quick_sort(int arr[], int l, int h) 
{

  int stack[h - l + 1];
  int top = -1;

  stack[++top] = l;
  stack[++top] = h;

  while (top >= 0) {
    h = stack[top--];
    l = stack[top--];

// Put pivot element at its correct position
    int p = partition(arr, l, h);

    if (p - 1 > l) {
      stack[++top] = l;
      stack[++top] = p - 1;
    }

    if (p + 1 < h) {
      stack[++top] = p + 1;
      stack[++top] = h;
    }
  }
}

int partition(int arr[], int start, int end)
{
    int pivot=arr[end];
    int pindx=start;

    for(int i=start; i<end; i++)
    {
        if(arr[i]<=pivot)
        {
            swap(&arr[pindx], &arr[i]);
            pindx++;
        }
    }
    swap(&arr[pindx], &arr[end]);
    return pindx;
}

int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
