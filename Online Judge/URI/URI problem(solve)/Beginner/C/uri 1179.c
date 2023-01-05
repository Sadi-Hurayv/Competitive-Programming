#include<stdio.h>
int main()
{
    int n[15], impar[5], par[5], i, j, o=0, e=0;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n[i]);
    }

    for(i=0; i<15; i++)
    {
        if(n[i]%2==0)
        {
            par[e]=n[i];
            e++;
            if(e==5)
            {
                for(j=0; j<5; j++)
                    printf("par[%d] = %d\n",j,par[j]);
                e=0;
            }
        }
        else
        {
            impar[o]=n[i];
            o++;
            if(o==5)
            {
                for(j=0; j<5; j++)
                    printf("impar[%d] = %d\n",j,impar[j]);
                o=0;
            }
        }
    }
    for(j=0; j<o; j++)
        printf("impar[%d] = %d\n",j,impar[j]);
    for(j=0; j<e; j++)
        printf("par[%d] = %d\n",j,par[j]);
    return 0;
}
