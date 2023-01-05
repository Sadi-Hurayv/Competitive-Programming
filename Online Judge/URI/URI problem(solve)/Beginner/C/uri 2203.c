#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, v, cas, fly;
    double dis;
    while(scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&v,&cas,&fly)!=EOF)
    {
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+(v*1.5);
        if(dis<=(cas+fly))
            printf("Y\n");
        else
            printf("N\n");
    }


    return 0;
}
