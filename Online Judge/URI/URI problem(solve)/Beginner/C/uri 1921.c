#include<stdio.h>
int main()
{
    unsigned long long int s, n;
    scanf("%lld",&n);
    s=((n*(n-1))/2)-n;
    printf("%lld\n",s);
    return 0;
}
