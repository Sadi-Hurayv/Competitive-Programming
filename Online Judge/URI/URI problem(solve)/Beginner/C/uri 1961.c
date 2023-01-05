#include<stdio.h>
int main()
{
    int i, f, n, h[100], hd;
    scanf("%d %d",&f,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&h[i]);
    }
    for(i=0; i<n-1; i++)
    {
        hd=h[i]-h[i+1];
        if(hd<0)
            hd=hd*(-1);
        if(hd>f)
            break;
    }
    if(i==n-1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
