#include<stdio.h>
int main()
{
    int n, z, p, f, w, ps, i;

    while((scanf("%d",&n)) && n!=0)
    {
        z=0;
        p=0;
        f=0;
        w=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&ps);
            if(ps==0 && f==0)
            {
                z++;
                p++;
            }
            else if(ps==0 && f==1)
            {
                p++;
            }
            else if(ps==1)
            {
                w+=p/2;
                p=0;
                f=1;
            }
        }

        if(p>0)
        {
            w-=z/2;
            p+=z;
            w+=p/2;
        }
        printf("%d\n",w);
    }
    return 0;
}
