#include<stdio.h>
int main()
{
    int rmax1, cmax1, rmax2, cmax2;
    int i, j, k, l, sum=0;
    printf("Enter the number of row and column of the two matrix below for multiplication.\n\n");
    printf("Matrix 1 row column : \n");
    scanf("%d%d",&rmax1,&cmax1);
    printf("Matrix 2 row and column : \n");
    scanf("%d%d",&rmax2,&cmax2);
    int  m1[rmax1][cmax1], m2[rmax2][cmax2], re[rmax1][cmax2];

    if(cmax1==rmax2)
    {
        printf("Enter the elements of the matrix1 below.\n");
        for(i=0; i<rmax1; i++)
        {
            for(j=0; j<cmax1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }

        printf("Enter the elements of the matrix2 below.\n");
        for(int i=0; i<rmax2; i++)
        {
            for(j=0; j<cmax2; j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        printf("\n\nThe result is below.\n");
//        for(i=0; i<rmax1; i++)
//        {
//            k=0;
//            MAT:
//                sum=0;
//            for(j=0,l=0; j<cmax1, l<rmax2; j++, l++)
//            {
//                sum=sum+(m1[i][j]*m2[l][k]);
//            }
//            re[i][k]=sum;
//            printf("%d\t",re[i][k]);
//            if(k==cmax2-1)
//            {
//                printf("\n");
//            }
//            k++;
//            if(k<cmax2)
//            {
//                goto MAT;
//            }
//        }

        for(i=0; i<rmax1; i++)
        {
            for(l=0; l<cmax2; l++)
            {
                sum=0;
                for(j=0,k=0; j<cmax1,k<rmax2; j++,k++)
                {
                    sum+=m1[i][j]*m2[k][l];
                }
                re[i][l]=sum;
                printf("%d\t",re[i][l]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication of this two matrix is not possible.");
    }

    return 0;

}
