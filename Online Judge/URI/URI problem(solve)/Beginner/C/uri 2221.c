#include<stdio.h>
int main()
{
    int t, bo, da, dd, dl, ga, gd, gl;
    double D, G;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        D=0;
        G=0;
        scanf("%d %d %d %d %d %d %d",&bo,&da,&dd,&dl,&ga,&gd,&gl);

        D=(da+dd)/2;
        if(dl%2==0)
            D+=bo;

        G=(ga+gd)/2;
        if(gl%2==0)
            G+=bo;

        if(D>G)
            printf("Dabriel\n");
        else if(G>D)
            printf("Guarte\n");
        else
            printf("Empate\n");

    }
    return 0;
}
