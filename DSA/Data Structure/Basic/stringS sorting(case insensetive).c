#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[5][11], swap[11];
    int i, j, k, flag2, flag1[5][11]={0}, swa[11];
    printf("Enter 5 words with not more than 10 latter :\n");
    for(i=0; i<5; i++)
        gets(str[i]);
    for(i=0; i<5; i++)
    {
        for(j=0; j<strlen(str[i]); j++)
        {
            if(isupper(str[i][j]))
            {
                str[i][j]=str[i][j]+32;
                flag1[i][j]=1;
            }

        }
    }

    for(i=0; i<5-1; i++)
    {
        flag2=0;
        for(j=0; j<5-1-i; j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                for(k=0; k<=strlen(str[j]); k++)///Here the reason of (<=) is null character ('\0').
                {
                    swap[k]=str[j][k];
                    swa[k]=flag1[j][k];
                }


                for(k=0; k<=strlen(str[j+1]); k++)///Here the reason of (<=) is null character ('\0').
                {
                    str[j][k]=str[j+1][k];
                    flag1[j][k]=flag1[j+1][k];
                }


                for(k=0; k<=strlen(swap); k++)///Here the reason of (<=) is null character ('\0').
                {
                     str[j+1][k]=swap[k];
                     flag1[j+1][k]=swa[k];
                }

                flag2=1;
            }
        }
        if(flag2==0)
            break;
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<strlen(str[i]); j++)
        {
            if(flag1[i][j]==1)
                str[i][j]=str[i][j]-32;
        }
    }

    printf("\n");

    for(i=0; i<5; i++)
        puts(str[i]);

    return 0;
}
