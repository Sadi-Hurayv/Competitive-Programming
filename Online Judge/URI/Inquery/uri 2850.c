#include<stdio.h>
#include<string.h>
int main()
{
    char si[30];
    while(scanf("%[^\n]s",&si)!=EOF)
    {
        //scanf("%[^\n]s",&si);
        if(strcmp(si,"direita")==0)
        {
            printf("frances\n");
        }
        else if(strcmp(si,"esquerda")==0)
        {
            printf("ingles\n");
        }
        else if(strcmp(si,"nenhuma")==0)
        {
            printf("portugues\n");
        }
        else if(strcmp(si,"as duas")==0)
        {
            printf("caiu\n");
        }
        fflush(stdin);

    }
    return 0;
}

