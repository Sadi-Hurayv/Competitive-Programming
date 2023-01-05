#include<stdio.h>
int main()
{
    int t, i, j, k;
    char name[100];
    double jaj[7],tj,swa,difi;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        tj=0;
        scanf("%s",&name);
        scanf("%lf",&difi);
        for(j=0; j<7; j++)
        {
            scanf("%lf",&jaj[j]);
        }
        for(i=0; i<7-1; i++)
        {
            for(j=0; j<7-1-i; j++)
            {
                if(jaj[j]<jaj[j+1])
                {
                    swa=jaj[j];
                    jaj[j]=jaj[j+1];
                    jaj[j+1]=swa;
                }
            }
        }
        for(i=1; i<7-1; i++)
        {
            tj+=jaj[i];
        }
        printf("%s %.2lf\n",name,(difi*tj));
    }
    return 0;
}
