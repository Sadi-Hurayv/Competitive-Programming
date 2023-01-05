#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[1000];
    while(scanf("%[^\n]",&s)!=EOF)
    {
        //printf("%s\n",s);
        for(i=0; i<strlen(s); i++)
        {

            if(s[i]==' ')
            {
                if(s[i+1]!=',' && s[i+1]!='.')
                {
                    printf("%c",s[i]);
                }
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
        getchar();
    }

    return 0;
}
