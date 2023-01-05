#include<stdio.h>
int main()
{
    int x, y, i, j, sum, tnum, count;
    scanf("%d",&tnum);
    for(i=0; i<tnum; i++)
    {
        sum=0;
        count=0;
        scanf("%d %d",&x,&y);
        for(j=x; count<y; j++)
        {
            if(j%2!=0)
            {
                sum+=j;
                count++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
