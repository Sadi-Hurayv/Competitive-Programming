#include<stdio.h>
#include<math.h>
int fact(int n);

int main()
{
    for(int i=1; i<=100; i++)
    {
        printf("Fatorial of %d --> %lld, Gamma of %d --> %lf\n",i,fact(i),i,tgamma(i+1));
    }
    return 0;
}
int fact(int n)
{
    printf("%d-%d\n",'A','Z');
    if(n==1)
        return 1;
    return (n*fact(n-1));
}
