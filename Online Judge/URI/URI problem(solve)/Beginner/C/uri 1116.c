#include<stdio.h>
int main()
{
    int tnum, x, y, i;
    double res;
    scanf("%d",&tnum);
    for(i=0; i<tnum; i++)
    {
        scanf("%d %d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
            res=x/(y*1.00);
            printf("%.1lf\n",res);
        }
    }
    return 0;
}
