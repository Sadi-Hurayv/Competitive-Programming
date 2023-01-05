#include<stdio.h>
int main()
{
    int i, j, mat[3][3], tran[3][3];
    printf("Enter a 3x3 matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
             scanf("%d",&mat[i][j]);
             tran[j][i]=mat[i][j];
        }
    }
    printf("\nThe transpose matrix of this matrix is below.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
