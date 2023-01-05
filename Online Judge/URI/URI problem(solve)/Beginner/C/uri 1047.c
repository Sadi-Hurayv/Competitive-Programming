#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,t,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1<h2)
    {
        t=((h2-h1)*60)+(m2-m1);
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2<h1)
    {
        t=((24-h1+h2)*60)+(m2-m1);
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1==h2&&m1<m2)
    {
        t=m2-m1;
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1==h2&&m1>m2)
    {
        t=(24*60)+(m2-m1);
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1==h2&&m1==m2)
    {
        t=24*60;
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}

