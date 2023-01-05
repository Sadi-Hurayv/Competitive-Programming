#include<stdio.h>
int main()
{
    int r, c, i, j;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        int arr[r][c], ans[r][c], tem;

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(arr[i][j]==1)
                    ans[i][j]=9;
                else
                {
                    tem=0;
                    if(i>0)
                        tem+=arr[i-1][j];
                    if(i<(r-1))
                        tem+=arr[i+1][j];
                    if(j>0)
                        tem+=arr[i][j-1];
                    if(j<(c-1))
                        tem+=arr[i][j+1];
                    ans[i][j]=tem;
                }
                printf("%d",ans[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
