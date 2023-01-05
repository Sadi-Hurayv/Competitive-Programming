#include<stdio.h>
int main()
{
    int n, d, da, mo, ye, p, c, f, i, j, fda, fmo, fye;

    while(scanf("%d %d",&n,&d)!=EOF)
    {
        f=0;
        for(i=0; i<d; i++)
        {
            c=0;
            scanf("%d/%d/%d",&da,&mo,&ye);
            for(j=0; j<n; j++)
            {
                scanf("%d",&p);
                if(p==1)
                    c++;
            }
            if(c==n && f==0)
            {
                f=1;
                fda=da;
                fmo=mo;
                fye=ye;
            }
        }
        if(f==1)
        {
            printf("%d/%d/%d\n",fda,fmo,fye);
        }
        else
            printf("Pizza antes de FdI\n");
    }
    return 0;
}
