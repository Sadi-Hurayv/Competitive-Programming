#include<stdio.h>
int main()
{
    int r, c, i, j, k, l, s=0, cou;
    scanf("%d %d",&r,&c);
    char ch[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            fflush(stdin);
            printf("ch[%d][%d]",i,j);
            scanf("%c",&ch[i][j]);

        }
    }
    for(i=0; i<=r; i++)
    {
        cou=0;
        for(k=0; k<r; k++)
        {
            for(l=0; l<c; l++)
            {
                if(ch[k][l]=='@')
                    cou++;
            }
        }
        if(cou==(c*r))
        {
            printf("%d\n",s);
            break;
        }
        else if(i==r)
        {
            s=-1;
            printf("%d\n",s);
            break;
        }
        for(j=0; j<c; j++)
        {
            if(ch[i][j]=='@')
            {
                if(j+1<c)
                    ch[i][j+1]='@';
                if(j-1>=0)
                    ch[i][j-1]='@';
                if(i+1<c)
                    ch[i+1][j]='@';
                if(i-1>=0)
                    ch[i-1][j]='@';
            }
        }
        s++;
    }
    return 0;
}
