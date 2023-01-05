#include<stdio.h>
int main()
{
    int t, i, j, s, l, k;
    while(scanf("%d",&t)!=EOF)
    {
        int arr[t][t];
        s=t/3;
        for(i=0,  k=t-1; i<t; i++, k--)
        {
            for(j=0; j<t; j++)
            {
                if(i==(t-1)/2 && j==(t-1)/2)
                    arr[i][j]=4;
                else if(i>=s && j>=s && i<t-s && j<t-s)
                    arr[i][j]=1;
                else if(i==j)
                    arr[i][j]=2;
                else if(j==k)
                    arr[i][j]=3;
                else
                    arr[i][j]=0;
            }
        }
        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
