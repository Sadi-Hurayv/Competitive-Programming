#include<stdio.h>
int main()
{
    int a, m, l, i, j, nm, nl, na;
    while(scanf("%d %d %d",&a,&m,&l)!=EOF)
    {
        int mar[m][a], lan[l][a];
        for(i=0; i<m; i++)
        {
            for(j=0; j<a; j++)
            {
                scanf("%d",&mar[i][j]);
            }
        }
        for(i=0; i<l; i++)
        {
            for(j=0; j<a; j++)
            {
                scanf("%d",&lan[i][j]);
            }
        }
        scanf("%d %d",&nm,&nl);
        scanf("%d",&na);
        if(mar[nm-1][na-1]>lan[nl-1][na-1])
            printf("Marcos\n");
        else if(mar[nm-1][na-1]<lan[nl-1][na-1])
            printf("Leonardo\n");
        else
            printf("Empate\n");
    }
    return 0;
}
