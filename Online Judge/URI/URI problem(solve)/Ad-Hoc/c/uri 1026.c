#include<stdio.h>
int main()
{
    unsigned long long int n1, n2;
    while(scanf("%lld %lld",&n1,&n2)!=EOF)
    {
        printf("%lld\n",n1^n2);
    }
    return 0;
}
