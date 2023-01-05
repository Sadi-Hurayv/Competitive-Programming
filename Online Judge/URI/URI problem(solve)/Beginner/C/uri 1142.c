#include<stdio.h>
int main()
{
    int tnum, i, j, k=1;
    scanf("%d",&tnum);
    for(i=0; i<tnum; i++)
    {
        for(j=0; j<3; j++,k++)
            printf("%d ",k);
        printf("PUM\n");
        k++;
    }
    return 0;
}
