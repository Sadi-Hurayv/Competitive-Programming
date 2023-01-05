#include<stdio.h>
int main()
{
    int num, i, x=1, y=0, z=1;
    scanf("%d",&num);
    printf("%d ",0);
    for(i=1; i<num; i++)
    {
        if(i==num-1)
            printf("%d",x);
        else
            printf("%d ",x);
        x=y+z;
        y=z;
        z=x;
    }
    printf("\n");
    return 0;
}
