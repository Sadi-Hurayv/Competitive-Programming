#include<stdio.h>
int main()
{
    int a, n, i, j, sum=0, count=0;
    scanf("%d",&a);
    for(i=0; ; i++)
    {
        scanf("%d",&n);
        if(n>0)
            break;
    }
    for(i=a; ; i++)
    {
        sum+=i;
        count++;
        if(count==n)
            break;
    }
    printf("%d\n",sum);
    return 0;
}
