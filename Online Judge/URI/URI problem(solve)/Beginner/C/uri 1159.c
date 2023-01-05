#include<stdio.h>
int main()
{
    int i, x, sum, j, count;
    for(i=0; ; i++)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        sum=0;
        count=0;
        for(j=x; count<5; j++)
        {
            if(j%2==0)
            {
                sum+=j;
                count++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
