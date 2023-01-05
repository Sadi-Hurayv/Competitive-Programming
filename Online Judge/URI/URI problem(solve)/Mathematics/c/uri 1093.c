#include<stdio.h>
#include<math.h>

int main()
{
    int e1, e2, at, d, c1, c2;
    double p, tmp;
    for(; ;)
    {
        tmp=0;
        c1=0;
        c2=0;
        scanf("%d%d%d%d",&e1,&e2,&at,&d);
        if(e1==0 && e2==0 && at==0 && d==0)
            break;
        while(e1>0)
        {
            e1=e1-d;
            c1++;
        }
        while(e2>0)
        {
            e2=e2-d;
            c2++;
        }
        if(at==3)
        {
            p=(double)c1/(double)(c1+c2);
        }
        else
        {
            tmp=1.0-(6-at)/6.0;
            tmp=(1.0-tmp)/tmp;
            p=(1.0-pow(tmp,c1))/(1.0-pow(tmp,c1+c2));
        }
        printf("%.1f\n",p*100.0);
    }
    return 0;
}

