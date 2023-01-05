#include<stdio.h>
int main()
{
    int s, b, a, ss, sb, sa, ts=0, tb=0, ta=0, tss=0, tsb=0, tsa=0, t;
    char name[100];
    double S, B, A;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%s",&name);
        scanf("%d %d %d",&s,&b,&a);
        scanf("%d %d %d",&ss,&sb,&sa);
        ts+=s;
        tb+=b;
        ta+=a;
        tss+=ss;
        tsb+=sb;
        tsa+=sa;
    }
    S=(tss/(ts*1.0))*100;
    B=(tsb/(tb*1.0))*100;
    A=(tsa/(ta*1.0))*100;
    printf("Pontos de Saque: %.2lf %%.\n",S);
    printf("Pontos de Bloqueio: %.2lf %%.\n",B);
    printf("Pontos de Ataque: %.2lf %%.\n",A);
    return 0;
}
