#include<stdio.h>
int main()
{
    int c,u,i;
    float p,tp[2],sum=0;
    for(i=0;i<2;i++)
    {
        scanf("%d%d%f",&c,&u,&p);
        tp[i]=u*p;
        sum+=tp[i];
    }
    printf("VALOR A PAGAR: R$ %.2f\n",sum);
    return 0;
}
