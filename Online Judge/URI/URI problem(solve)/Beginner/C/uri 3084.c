#include<stdio.h>
int main()
{
    int ha, ma, h, m;
    while(scanf("%d%d",&ha,&ma)!=EOF)
    {
        h=ha/30;
        m=ma/6;
        printf("%02d:%02d\n",h,m);
    }

    return 0;
}
