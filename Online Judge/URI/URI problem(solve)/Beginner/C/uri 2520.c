#include<stdio.h>
#include<math.h>
int main()
{
    int r, c, i, j;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        int num[r][c], anac, anar, yr, yc;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&num[i][j]);
                if(num[i][j]==1)
                {
                    yr=i;
                    yc=j;
                }
                else if(num[i][j]==2)
                {
                    anar=i;
                    anac=j;
                }
            }
        }
        printf("%d\n",(abs(yr-anar)+abs(yc-anac)));
    }
}
