#include<stdio.h>
int a, b, n;
int main()
{
    int t;
    long long int result;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%d%d",&a,&b,&n);
        result=XORinacci(n);
        printf("%lld",result);
    }
    return 0;
    //printf("%d",3^4);
}

int XORinacci(int n)
{
    if(n==0)
        return a;
    else if(n==1)
        return b;
    else
        return (XORinacci(n-1) ^ XORinacci(n-2));
}
