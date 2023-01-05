#include<stdio.h>
int main()
{
    int x, y, i, count=0;
    scanf("%d %d",&x,&y);
    for(i=1; i<=y; i++)
    {
        count++;
        if(count==x)
            printf("%d",i);
        else
            printf("%d ",i);
        if(count==x)
        {
            count=0;
            printf("\n");
        }
    }
    return 0;
}
