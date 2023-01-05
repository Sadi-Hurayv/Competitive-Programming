#include<stdio.h>
int main()
{
    int x, i, n[10], j;
    scanf("%d",&x);
    for(i=0, j=x; i<10; i++, j=j*2)
    {
        n[i]=j;
    }
    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
