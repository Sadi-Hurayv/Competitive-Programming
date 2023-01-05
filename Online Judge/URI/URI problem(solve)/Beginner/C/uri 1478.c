#include<stdio.h>
int main()
{
    int i, j, k,l, n, m, arr[100][100];
    for(m=0; ; m++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            l=2;
            k=i+1;
            for(j=0; j<n; j++)
            {
                if(k>=1)
                {
                    arr[i][j]=k;
                    k--;
                }
                else
                {
                    arr[i][j]=l;
                    l++;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==n-1)
                    printf("%3d",arr[i][j]);
                else
                    printf("%3d ",arr[i][j]);
            }

            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
