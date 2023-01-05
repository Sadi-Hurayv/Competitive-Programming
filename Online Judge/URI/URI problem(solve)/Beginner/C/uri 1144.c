#include<stdio.h>
int main()
{
    int tnum, i, j, k, l;
    scanf("%d",&tnum);
    for(i=1; i<=tnum; i++)
    {
        for(j=0, k=i*i, l=i*i*i; j<2; j++, k++, l++)
        {
            printf("%d %d %d\n",i,k,l);
        }
    }
    return 0;
}
