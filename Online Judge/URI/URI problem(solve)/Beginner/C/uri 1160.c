#include<stdio.h>
int main()
{
    int t, p1, p2, i, count;
    double g1, g2;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d %d %lf %lf",&p1,&p2,&g1,&g2);
        while(p1<=p2)
        {
            p1=p1+((p1*g1)/100);
            p2=p2+((p2*g2)/100);
            count++;
            if(count>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(count<=100)
            printf("%d anos.\n",count);
    }
    return 0;
}
