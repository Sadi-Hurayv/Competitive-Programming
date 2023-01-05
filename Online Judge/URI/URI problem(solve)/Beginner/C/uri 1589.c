#include<stdio.h>
int main()
{
    long int i, t, r1, r2, r;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld %ld",&r1,&r2);
        printf("%ld\n",r1+r2);
    }
    return 0;
}
