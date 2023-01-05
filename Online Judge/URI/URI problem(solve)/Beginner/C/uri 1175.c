#include<stdio.h>
int main()
{
    int n[20], i, j, swa;
    for(i=0; i<20; i++)
        scanf("%d",&n[i]);
    for(i=0, j=19; i<10; i++, j--)
    {
        swa=n[j];
        n[j]=n[i];
        n[i]=swa;
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}
