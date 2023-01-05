#include<stdio.h>
int main()
{
    int i, j, k, l, arr[70][70], n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0, k=0, l=n-1; i<n; i++, k++, l--)
        {
            for(j=0; j<n; j++)
            {
                if(j==k)
                    arr[i][j]=1;
                if(j==l)
                    arr[i][j]=2;
                if(j!=k && j!=l)
                    arr[i][j]=3;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n;j++)
                printf("%d",arr[i][j]);
            printf("\n");
        }
    }
    return 0;
}
