#include<stdio.h>
int main()
{
    int by, giv, i, j;
    while(1)
    {
        scanf("%d %d",&by,&giv);
        if(by==giv && by==0)
            break;
        if((giv-by)==7 || (giv-by)==12 || (giv-by)==22 || (giv-by)==52 || (giv-by)==102 || (giv-by)==15 || (giv-by)==25 || (giv-by)==55 || (giv-by)==105 || (giv-by)==30 || (giv-by)==60 || (giv-by)==110 || (giv-by)==70 || (giv-by)==120 || (giv-by)==150)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
