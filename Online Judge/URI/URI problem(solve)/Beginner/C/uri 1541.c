#include<stdio.h>
#include<math.h>
int main()
{
    int s1, s2, rs, p, i;
    for(i=0; ; i++)
    {
        scanf("%d",&s1);
        if(s1==0)
            break;
        scanf("%d %d",&s2,&p);
        rs=sqrt((s1*s2)/(p/(100*1.00)));
        printf("%d\n",rs);
    }
    return 0;
}
