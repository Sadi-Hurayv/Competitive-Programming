#include<stdio.h>
int main()
{
    long long int h, o, re;
    while(scanf("%lld%lld",&h,&o)!=EOF)
    {
        re=h-o;
        if(re<0)
            re=-re;
        printf("%lld\n",re);
    }
    return 0;
}
