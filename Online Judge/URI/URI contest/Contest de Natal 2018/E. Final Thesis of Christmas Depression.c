#include<stdio.h>
int main()
{
    int d, e;
    scanf("%d %d",&d,&e);
    if(d>e)
    {
        printf("Eu odeio a professora!\n");
    }
    else
    {
        if(d+3>e)
        {
            printf("Parece o trabalho do meu filho!\n");
            if(d+2<24)
            {
                printf("TCC Apresentado\n");
            }
            else
            {
                printf("Fail! Entao eh nataaaaal!\n");
            }
        }
        else
        {
            printf("Muito bem! Apresenta antes do Natal!\n");
        }
    }
    return 0;
}
