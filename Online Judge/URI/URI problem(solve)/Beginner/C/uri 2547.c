#include<stdio.h>
int main()
{
    int t, max, min, i, j, h;
    while(scanf("%d %d %d",&t,&min,&max)!=EOF)
    {
        j=0;
        for(i=0; i<t; i++)
        {
            scanf("%d",&h);
            if(h<=max && h>=min)
            {
                j++;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
