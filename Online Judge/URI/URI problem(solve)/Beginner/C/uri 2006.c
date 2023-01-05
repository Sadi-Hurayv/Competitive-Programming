#include<stdio.h>
int main()
{
    int gia, can, num=0, i;
    scanf("%d",&gia);
    for(i=0; i<5; i++)
    {
        scanf("%d",&can);
        if(gia==can)
            num++;
    }
    printf("%d\n",num);
    return 0;
}
