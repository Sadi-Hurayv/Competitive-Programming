#include<stdio.h>
int fibo(int n);
int c=0;

int fibo(int n)
{
    if(n==0)
    {
        //c++;
        return 0;
    }
    else if(n==1)
    {
        //c++;
       return 1;
    }
    else
    {
        c=c+2;
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    int t, num;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        c=0;
        scanf("%d",&num);
        printf("fib(%d) = %d calls = %d\n",num,c,fibo(num));
    }
    return 0;
}

