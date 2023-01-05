#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, k, p, key;

    printf("Enter the value of a, b, k and p : ");
    scanf("%lf%lf%lf%lf",&a,&b,&k,&p);
    key=log(a)/log(b);

    if(key>k)
    {
        printf("THETA(n^%lf)",key);
    }
    else if(key==k)
    {
        if(p>-1)
        {
            printf("THETA(n^%lf log^%lf(n))",k,(p+1));
        }
        else if(p==-1)
        {
            printf("THETA(n^%lf loglog(n))",k);
        }
        else if(p<-1)
        {
            printf("THETA(n^%lf)",k);
        }
    }
    else if(key<k)
    {
        if (p>=0)
        {
            printf("BIG(O)(n^%lf log^%lf(n))",k,p);
        }
        else if(p<0)
        {
            printf("BIG(O)(n^%lf)",k);
        }
    }
    return 0;
}
