#include<stdio.h>
int fibo(int n);
int main()
{
    int t;
    printf("Enter the term : ");
    scanf("%d",&t);
    printf("The fibonacci series till %d term is :",t);
    for(int i=0; i<t; i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}
