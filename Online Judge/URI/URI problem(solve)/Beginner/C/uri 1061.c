#include<stdio.h>
int main()
{
    int sd, ed, sh, eh, sm, em, ss, es, rd, rh, rm, rs;
    char ch1, ch2, ch3, ch4, ch5, ch6;

    scanf("%s %d",&ch1,&sd);
    scanf("%d %s %d %s %d",&sh,&ch3,&sm,&ch4,&ss);
    scanf("%s %d",&ch2,&ed);
    scanf("%d %s %d %s %d",&eh,&ch5,&em,&ch6,&es);

    rs=es-ss;
    rm=em-sm;
    rh=eh-sh;
    rd=ed-sd;

    if(rs<0)
    {
        rs=60+rs;
        rm=rm-1;
    }
    if(rm<0)
    {
        rm=60+rm;
        rh=rh-1;
    }
    if(rh<0)
    {
        rh=24+rh;
        rd=rd-1;
    }

    printf("%d dia(s)\n",rd);
    printf("%d hora(s)\n",rh);
    printf("%d minuto(s)\n",rm);
    printf("%d segundo(s)\n",rs);

    return 0;
}
