#include<stdio.h>
int main()
{
    int al=0, ga=0, di=0, fu, i;
    printf("MUITO OBRIGADO\n");
    for(i=0; ; i++)
    {
        scanf("%d",&fu);
        if(fu==1)
            al++;
        else if(fu==2)
            ga++;
        else if(fu==3)
            di++;
        else if(fu==4)
            break;
    }
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",di);
    return 0;
}
