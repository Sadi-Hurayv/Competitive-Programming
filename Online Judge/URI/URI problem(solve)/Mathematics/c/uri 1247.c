#include<stdio.h>
#include<math.h>
int main()
{
    int d, vt, vg, dt;
    double Tt, Tg, dg;
    while(scanf("%d%d%d",&d,&vt,&vg)!=EOF)
    {
        dt=12;
        dg=sqrt(dt*dt+d*d);
        Tt=dt/(vt*1.00);
        Tg=dg/vg;
        //printf("%lf  %lf\n",Tg,Tt);
        if(Tg<=Tt)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
