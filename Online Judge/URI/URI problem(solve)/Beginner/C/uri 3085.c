#include<stdio.h>
#include<math.h>

double getDistance(int x1, int y1, int x2, int y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}

int main()
{
    int n, k, x,y, dx, dy, i, t, tv;
    char ch;
    x=0;
    y=0;
    scanf("%d%d%d%d",&n,&k,&dx,&dy);
    t=0;
    if(getDistance(x,y,dx,dy)>k)
    {
        t=1;
        tv=1;
    }
    for(i=0; i<n; i++)
    {
        getchar();
        scanf("%c",&ch);
        if(t==0)
        {
            if(ch=='C')
                y++;
            else if(ch=='B')
                y--;
            else if(ch=='E')
                x--;
            else if(ch=='D')
                x++;
            if(getDistance(x,y,dx,dy)>k)
            {
                t=1;
                tv=i+1;
            }
        }
    }

    if(t==0)
    {
        if(x==dx && y==dy)
        {
            printf("Sucesso\n");
        }
        else
        {
            printf("Trap %d\n",n);
        }
    }
    else if(t==1)
    {
        printf("Trap %d\n",tv);
    }

    return 0;
}
