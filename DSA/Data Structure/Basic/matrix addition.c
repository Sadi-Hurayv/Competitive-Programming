#include<stdio.h>
int main()
{
    int i,j,mat1[2][2],mat2[2][2],add[2][2];

    printf("Input elements in the first matrix : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Input elements in the second matrix : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    ///addition
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           add[i][j]=mat1[i][j]+mat2[i][j];
        }
    }


    printf("The first matrix is : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    printf("The addition of two matrix is : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}

