#include<stdio.h>
int main()
{
    int n, p=0, m=0, z=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            p++;
        else if(arr[i]<0)
            m++;
        else
            z++;
    }
    printf("%.6f\n%.6f\n%.6f",(p*1.00)/n, (m*1.00)/n, (z*1.00)/n);
    return 0;
}
