#include<stdio.h>
int main()
{
    int t, n1, n2, h, l, i, r;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&n1,&n2);
        if(n1>n2)
        {
            h=n1;
            l=n2;
        }
        else
        {
            h=n2;
            l=n1;
        }
        r=h%l;
        while(r!=0)
        {
            h=l;
            l=r;
            r=h%l;
        }
        printf("%d\n",l);
    }
    return 0;
}
