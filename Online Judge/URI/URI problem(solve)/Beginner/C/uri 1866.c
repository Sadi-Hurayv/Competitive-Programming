#include<stdio.h>
int main()
{
    int i, j, sum, t, n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            if(j%2!=0)
                sum+=1;
            else
                sum+=-1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
