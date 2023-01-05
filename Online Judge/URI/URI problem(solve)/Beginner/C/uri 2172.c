#include<stdio.h>
int main()
{
    int in;
    long int xp, fxp;
    while(scanf("%d %ld",&in,&fxp) && (in || fxp))
    {
        printf("%ld\n",(in*fxp));
    }
    return 0;
}
