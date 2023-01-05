#include<stdio.h>
int main()
{
    int t, x, i, j, sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        sum=0;
        scanf("%d",&x);
        for(j=1; j<x; j++)
        {
            if(x%j==0)
                sum+=j;
        }
        if(sum==x)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
    }
    return 0;
}
