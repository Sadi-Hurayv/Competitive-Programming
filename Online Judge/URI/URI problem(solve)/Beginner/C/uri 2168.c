#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d",&n);
    int ca[n+1][n+1];
    char re[n][n];
    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            scanf("%d",&ca[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ca[i][j]==1 && ca[i][j+1]==1)
                re[i][j]='S';
            else if(ca[i][j]==1 && ca[i+1][j]==1)
                re[i][j]='S';
            else if(ca[i][j]==1 && ca[i+1][j+1]==1)
                re[i][j]='S';
            else if(ca[i][j+1]==1 && ca[i+1][j]==1)
                re[i][j]='S';
            else if(ca[i][j+1]==1 && ca[i+1][j+1]==1)
                re[i][j]='S';
            else if(ca[i+1][j]==1 && ca[i+1][j+1]==1)
                re[i][j]='S';
            else
                re[i][j]='U';
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%c",re[i][j]);
        }
        printf("\n");
    }
    return 0;
}
