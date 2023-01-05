#include<stdio.h>
int main()
{
    int row, col, i, j, r=0, c=0;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1; i<row-1; i++)
    {
        for(j=1; j<col-1; j++)
        {
            if(arr[i][j]==42)
            {
                if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7 && arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7)
                {
                    r=i+1;
                    c=j+1;
                    break;
                }

            }
        }
    }
    printf("%d %d\n",r,c);
    return 0;

}
