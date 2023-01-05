#include<stdio.h>
#include<string.h>
int string_sorting(char str[][11]);

int main()
{
    char stri[5][11];
    int i;
    printf("Enter 5 words with not more than 10 latter :\n");
    for(i=0; i<5; i++)
        gets(stri[i]);

    string_sorting(stri);


    printf("\n");

    for(i=0; i<5; i++)
        puts(stri[i]);

    return 0;
}
int string_sorting(char str[][11])
{
    char swap[11];
    int i, j, k, flag;
    for(i=0; i<5-1; i++)
    {
        flag=0;
        for(j=0; j<5-1-i; j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                for(k=0; k<=strlen(str[j]); k++) ///Here the reason of (<=) is null character ('\0').
                    swap[k]=str[j][k];

                for(k=0; k<=strlen(str[j+1]); k++)///Here the reason of (<=) is null character ('\0').
                    str[j][k]=str[j+1][k];

                for(k=0; k<=strlen(swap); k++)///Here the reason of (<=) is null character ('\0').
                    str[j+1][k]=swap[k];

                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    return 0;
}

