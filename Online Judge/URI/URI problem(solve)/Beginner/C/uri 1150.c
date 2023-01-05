#include<stdio.h>
int main()
{
    int i, count=0, sum=0, x, z;
    scanf("%d",&x);
    for(i=0; ; i++)
    {
        scanf("%d",&z);
        if(z>x)
            break;
    }
    for(i=x; ; i++)
    {
        count++;
        sum+=i;
        if(sum>z)
            break;
    }
    printf("%d\n",count);
    return 0;
}
