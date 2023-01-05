#include<stdio.h>
int main()
{
    int x, i, j, n[1000];
    scanf("%d",&x);
    for(i=0, j=0; i<1000; i++, j++)
    {
        if(j==x)
            j=0;
        n[i]=j;
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
