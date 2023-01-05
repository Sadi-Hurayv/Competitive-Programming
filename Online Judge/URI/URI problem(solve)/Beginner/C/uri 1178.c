#include<stdio.h>
int main()
{
    int i, j;
    double x, n[100];
    scanf("%lf",&x);
    for(i=0; i<100; i++)
    {
        n[i]=x;
        x=x/2;
        printf("N[%d] = %.4lf\n",i,n[i]);
    }
    return 0;
}
