#include<stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && b<=c) || (a<b && b<c && b-a<=c-b) || (a>b && b>c && b-c<a-b) || (a==b && b<c))
        printf(":)\n");
    else if((a<b && b>=c) || (a<b && b<c && c-b<b-a) || (a>b && b>c && b-c>=a-b) || (a==b && b>=c))
        printf(":(\n");
    return 0;
}
