#include<stdio.h>
int main()
{
    int t,h,m,s;
    scanf("%d",&t);
    h=t/3600;
    t=t%3600;
    m=t/60;
    t=t%60;
    s=t;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
