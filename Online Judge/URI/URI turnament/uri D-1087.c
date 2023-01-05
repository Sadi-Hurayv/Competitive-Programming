#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,dif_x,dif_y, re;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2) && x1 && y1 && x2 && y2)
    {
        if(x1>x2)
            dif_x=x1-x2;
        else if(x1<x2)
            dif_x=x2-x1;
        if(y1>y2)
            dif_y=y1-y2;
        else if(y1<y2)
            dif_y=y2-y1;

        if(x1==x2 && y1==y2)
            re=0;
        else if(x1==x2 && y1!=y2 || y1==y2 && x1!=x2)
            re=1;
        else
        {
            if(dif_x==dif_y)
                re=1;
            else
                re=2;
        }
        printf("%d\n",re);
    }
    return 0;
}
