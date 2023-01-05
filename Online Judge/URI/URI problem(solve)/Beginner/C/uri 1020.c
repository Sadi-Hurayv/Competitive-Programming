#include<stdio.h>
int main()
{
    int D,y,m,d;
    scanf("%d",&D);
    y=D/365;
    D=D%365;
    m=D/30;
    D=D%30;
    d=D;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
