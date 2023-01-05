#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
}
int fact(int n)
{
//    int f;
    if(n==0 || n==1)
        return 1;
    else
        return (n*fact(n-1));
//        f=n*fact(n-1);

//        return f;
}
