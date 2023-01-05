#include<stdio.h>
int main()
{
    unsigned long long int n, mul, flag, count;
    while(scanf("%lld",&n)!=EOF)
    {
        mul=1;
        flag=0;
        count=1;
        while(flag==0)
        {
            while(n>mul)
            {
                mul=(mul*10)+1;
                count++;
                printf("c1--%lld--%lld\n",n,mul);
            }
            printf("bf\n");

            if(mul%n==0)
            {
                //printf("AS\n");
                printf("%lld\n",count);
                flag=1;
                break;
            }
            else
            {
                mul=(mul*10)+1;
                count++;
                printf("c2--%lld--%lld\n",n,mul);
            }
        }
    }
    return 0;
}
