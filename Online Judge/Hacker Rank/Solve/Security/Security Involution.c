#include<stdio.h>
int main()
{
    int n, k=0;
    scanf("%d",&n);
    int arr[n], ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[arr[i]-1]==i+1)
            k=0;
        else
        {
            k=1;
            break;
        }
    }
    if(k==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}

