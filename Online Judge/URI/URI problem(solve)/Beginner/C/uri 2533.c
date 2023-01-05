#include<stdio.h>
int main()
{
    int s, num, wrk, tnw, i, tw;
    double re;
    while(scanf("%d",&s)!=EOF)
    {
        tnw=0;
        tw=0;
        for(i=0; i<s; i++)
        {
            scanf("%d %d",&num,&wrk);
            tw+=wrk;
            tnw+=(num*wrk);
        }
        re=(tnw/(tw*1.00))/100;
        printf("%.4lf\n",re);
    }
    return 0;
}
