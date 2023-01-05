#include<stdio.h>
int main()
{
    int i, j, k, l;
    for(j=0; j<7; j++)
    {
        for(i=0; i<39; i++)
        {
            if(j==0 || j==6)
            {
                printf("-");
            }
            else
            {
                if(i==0 || i==38)
                {
                    printf("|");
                }
                else
                {
                    if(j==1)
                    {
                        if(i==9)
                        {
                            printf("Roberto");
                        }
                        else if(i<9 || i>15)
                        {
                            printf(" ");
                        }
                    }
                    else if(j==3)
                    {
                        if(i==9)
                        {
                            printf("5786");
                        }
                        else if(i<9 || i>12)
                        {
                            printf(" ");
                        }
                    }
                    else if(j==5)
                    {
                        if(i==9)
                        {
                            printf("UNIFEI");
                        }
                        else if(i<9 || i>14)
                        {
                            printf(" ");
                        }
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
