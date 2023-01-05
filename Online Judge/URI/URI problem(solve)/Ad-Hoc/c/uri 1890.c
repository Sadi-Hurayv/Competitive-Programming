#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, c, d;
    double re;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&c,&d);
        if(c==0 && d==0)
        {
            printf("0\n");
        }
        else
        {
            re=(pow(26,c))*(pow(10,d));
            printf("%.0lf\n",re);
        }

    }
    return 0;
}
