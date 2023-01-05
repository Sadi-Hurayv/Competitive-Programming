#include<stdio.h>
int main()
{
    int wh, wm, frm, wrm;
    while(scanf("%d:%d",&wh,&wm)!=EOF)
    {
        wrm=wh*60+wm;
        frm=(wrm+60)-(8*60);
        if(frm<0)
            frm=0;
        printf("Atraso maximo: %d\n",frm);
    }
}
