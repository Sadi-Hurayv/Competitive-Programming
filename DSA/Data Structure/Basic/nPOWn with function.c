#include<stdio.h>
int powr(int n);
int c=0;
int main()
{
    int t;
    printf("Enter the number :");
    scanf("%d",&t);
    printf("%d to the power %d is %d\n",t,t,powr(t));
    return 0;
}
int powr(int n)
{
    int re=0;
    if(c==n)
        return 1;
    c++;
//    printf("%d - %d  \n",c,n);
    re=n*powr(n);
    return re;
}
