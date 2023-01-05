#include<stdio.h>
int main()
{
    int i, t, n;
    long long int x, y, z, fib[61];
    scanf("%d",&t);
    x=0;
    y=1;
    z=1;
    fib[0]=0;
    for(i=1; i<=60; i++)
    {
        fib[i]=z;
        z=x+y;
        x=y;
        y=z;
    }
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,fib[n]);
    }
    return 0;
}
