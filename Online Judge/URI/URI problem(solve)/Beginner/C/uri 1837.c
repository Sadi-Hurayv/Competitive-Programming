#include<stdio.h>
int main()
{
    int a, b, q, r;
    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;
    if(r<0)
    {
        if(b>0)
            q=q-1;
        else if(b<0)
            q=q+1;
        r=a-b*q;
    }
    printf("%d %d\n",q,r);
    return 0;
}
