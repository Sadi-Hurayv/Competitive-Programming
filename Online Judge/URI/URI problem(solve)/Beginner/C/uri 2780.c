#include<stdio.h>
int main()
{
    int dis;
    scanf("%d",&dis);
    if(dis<=800)
    {
        printf("1\n");
    }
    else if(dis>800 && dis<=1400)
    {
        printf("2\n");
    }
    else if(dis>1400 && dis<=2000)
    {
        printf("3\n");
    }
    return 0;
}
