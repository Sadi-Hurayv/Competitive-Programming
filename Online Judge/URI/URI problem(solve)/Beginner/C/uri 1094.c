#include<stdio.h>
int main()
{
    int test, num, i;
    float pc, ps, pr, ctot=0, stot=0, rtot=0, total;
    char ch;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %c",&num,&ch);
        if(ch=='C')
            ctot+=num;
        else if(ch=='R')
            rtot+=num;
        else if(ch=='S')
            stot+=num;
    }
    total=stot+rtot+ctot;
    pc=(ctot/total)*100.00;
    ps=(stot/total)*100.00;
    pr=(rtot/total)*100.00;

    printf("Total: %.0f cobaias\n",total);
    printf("Total de coelhos: %.0f\n",ctot);
    printf("Total de ratos: %.0f\n",rtot);
    printf("Total de sapos: %.0f\n",stot);
    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);

    return 0;
}
