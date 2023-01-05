#include<stdio.h>
int main()
{
    int t, h, m, o, i;
    scanf("%d",&t);
    for(i=0;i<t ;i++)
    {
        scanf("%d %d %d",&h,&m,&o);
        if(o==1)
            printf("%02d:%02d - A porta abriu!\n",h,m);
        else
            printf("%02d:%02d - A porta fechou!\n",h,m);
    }
    return 0;
}
