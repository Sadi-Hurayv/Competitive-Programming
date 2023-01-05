#include<stdio.h>
int main()
{
    int in_g, gr_g, in=0, ge=0, draw=0, count=0, x;
    read:
    count++;
    scanf("%d %d",&in_g,&gr_g);
    if(in_g>gr_g)
        in++;
    else if(gr_g>in_g)
        ge++;
    else
        draw++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x==1)
        goto read;

    printf("%d grenais\n",count);
    printf("Inter:%d\n",in);
    printf("Gremio:%d\n",ge);
    printf("Empates:%d\n",draw);
    if(in>ge)
        printf("Inter venceu mais\n");
    else if(ge>in)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
