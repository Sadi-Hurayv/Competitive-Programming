#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j;
    char ch1[7], ch2[7];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",&ch1);
        scanf("%s",&ch2);

        if(strcmp(ch1,ch2)==0 && strcmp(ch1,"ataque")==0)
            printf("Aniquilacao mutua\n");
        else if(strcmp(ch1,ch2)==0 && strcmp(ch1,"pedra")==0)
            printf("Sem ganhador\n");
        else if(strcmp(ch1,ch2)==0 && strcmp(ch1,"papel")==0)
            printf("Ambos venceram\n");
        else
        {
            if(strcmp(ch1,"ataque")==0 && (strcmp(ch2,"pedra")==0 || strcmp(ch2,"papel")==0))
                printf("Jogador 1 venceu\n");
            else if(strcmp(ch2,"ataque")==0 && (strcmp(ch1,"pedra")==0 || strcmp(ch1,"papel")==0))
                printf("Jogador 2 venceu\n");
            else if(strcmp(ch1,"pedra")==0 && strcmp(ch2,"papel")==0)
                printf("Jogador 1 venceu\n");
            else
                printf("Jogador 2 venceu\n");
        }
    }
    return 0;
}
