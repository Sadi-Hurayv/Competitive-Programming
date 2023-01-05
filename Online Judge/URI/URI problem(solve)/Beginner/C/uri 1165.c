#include<stdio.h>
int main()
{
    int t, x, i, j, count;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d",&x);
        for(j=1; j<=x; j++)
        {
            if(x%j==0)
                count++;
        }
        if(count==2)
            printf("%d eh primo\n",x);
        else
            printf("%d nao eh primo\n",x);
    }
    return 0;
}
