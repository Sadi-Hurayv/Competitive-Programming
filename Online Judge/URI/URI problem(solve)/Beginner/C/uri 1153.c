#include<stdio.h>
int main()
{
    int fact=1, i, num;
    scanf("%d",&num);
    for(i=num; i>0; i--)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}
