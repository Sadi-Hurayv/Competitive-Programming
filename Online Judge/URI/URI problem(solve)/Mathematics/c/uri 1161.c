#include<stdio.h>
long long int fact(long long int n);
int main()
{
    long long int num1, num2, sum1=0, sum2=0;
    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
        sum1=fact(num1);
        sum2=fact(num2);
        printf("%lld\n",sum1+sum2);
        sum1=0;
        sum2=0;
    }
    return 0;
}
long long int fact(long long int n)
{
//    int f;
    if(n==0 || n==1)
        return 1;
    else
        return (n*fact(n-1));
//        f=n*fact(n-1);

//        return f;
}

