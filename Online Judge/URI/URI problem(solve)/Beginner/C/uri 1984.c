#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    while(num>0)
    {
        printf("%lld",(num%10));
        num=num/10;
    }
    printf("\n");
    return 0;
}
