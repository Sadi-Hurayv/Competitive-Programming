#include<stdio.h>
int main()
{
    int n, i;
    long int age, yb;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&age);
        yb=age-2015;
        if(yb>=0)
            printf("%ld A.C.\n",yb+1);
        else
            printf("%ld D.C.\n",-yb);
    }
    return 0;
}
