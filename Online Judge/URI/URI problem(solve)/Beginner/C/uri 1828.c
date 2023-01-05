#include<stdio.h>
#include<string.h>
int main()
{
    int i, t;
    char s1[10], s2[10];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&s1);
        scanf("%s",&s2);
        if(strcmp(s1, "pedra")==0)
        {
            if(strcmp(s2, "tesoura")==0 || strcmp(s2, "lagarto")==0)
                printf("Caso #%d: Bazinga!\n",i);
                //a=0;
            else if(strcmp(s2, "papel")==0 || strcmp(s2, "Spock")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
                //a=1;
            else if(strcmp(s2, "pedra")==0)
                printf("Caso #%d: De novo!\n",i);
                //a=2;
        }
        else if(strcmp(s1, "papel")==0)
        {
            if(strcmp(s2, "pedra")==0 || strcmp(s2, "Spock")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if(strcmp(s2, "tesoura")==0 || strcmp(s2, "lagarto")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
            else if(strcmp(s2, "papel")==0)
                printf("Caso #%d: De novo!\n",i);;
        }
        else if(strcmp(s1, "tesoura")==0)
        {
            if(strcmp(s2, "papel")==0 || strcmp(s2, "lagarto")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if(strcmp(s2, "pedra")==0 || strcmp(s2, "Spock")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
            else if(strcmp(s2, "tesoura")==0)
                printf("Caso #%d: De novo!\n",i);
        }
        else if(strcmp(s1, "lagarto")==0)
        {
            if(strcmp(s2, "papel")==0 || strcmp(s2, "Spock")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if(strcmp(s2, "pedra")==0 || strcmp(s2, "tesoura")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
            else if(strcmp(s2, "lagarto")==0)
                printf("Caso #%d: De novo!\n",i);
        }
        else if(strcmp(s1, "Spock")==0)
        {
            if(strcmp(s2, "pedra")==0 || strcmp(s2, "tesoura")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if(strcmp(s2, "lagarto")==0 || strcmp(s2, "papel")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
            else if(strcmp(s2, "Spock")==0)
                printf("Caso #%d: De novo!\n",i);
        }
    }
    return 0;
}
