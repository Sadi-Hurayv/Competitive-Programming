#include<stdio.h>
int main()
{
    int min, i, j, t, pos;
    scanf("%d",&t);
    int n[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&n[i]);
    }
    pos=0;
    min=n[0];
    for(i=1; i<t; i++)
    {
        if(n[i]<min)
        {
            min=n[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}
