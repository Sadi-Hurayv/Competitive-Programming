#include<stdio.h>
int main()
{
    int num, i, j;
    for(i=0; ; i++)
    {
        scanf("%d",&num);
        if(num==0)
            break;
        for(j=1; j<=num; j++)
        {
            if(j==num)
                printf("%d",j);
            else
                printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
