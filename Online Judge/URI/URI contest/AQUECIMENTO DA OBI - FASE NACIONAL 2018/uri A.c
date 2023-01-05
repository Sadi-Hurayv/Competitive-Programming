#include<stdio.h>
#include<string.h>
int main()
{
    char si[9];
    while(scanf("%[^\n]",&si)!=EOF)
    {

        fflush(stdin);
        if(si[0]=='d')
        {
            printf("frances\n");
        }
        else if(si[0]=='e')
        {
            printf("ingles\n");
        }
        else if(si[0]=='n')
        {
            printf("portugues\n");
        }
        else if(si[0]=='a')
        {
            printf("caiu\n");
        }

    }
    return 0;
}
