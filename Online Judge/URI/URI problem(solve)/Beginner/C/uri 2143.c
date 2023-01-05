#include<stdio.h>
int main()
{
    int t, i, num;
    while(scanf("%d",&t) && t)///if(t==0) break;
    {

        for(i=0; i<t; i++)
        {
            scanf("%d",&num);
            if(num%2==0)
                printf("%d\n",num*2-2);
            else
                printf("%d\n",num*2-1);
        }
    }
    return 0;
}
