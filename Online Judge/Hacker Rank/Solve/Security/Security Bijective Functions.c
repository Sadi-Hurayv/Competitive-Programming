#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(k==1)
            continue;
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                k=1;
                break;
            }
        }
    }
    if(k==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
