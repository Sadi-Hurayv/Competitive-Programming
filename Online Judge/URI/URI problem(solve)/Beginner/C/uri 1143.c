#include<stdio.h>
int main()
{
    int tnum, i;
    scanf("%d",&tnum);
    for(i=1; i<=tnum; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}
