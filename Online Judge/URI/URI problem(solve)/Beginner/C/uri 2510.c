#include<stdio.h>
int main()
{
    int t, i;
    char name[30];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        fflush(stdin);
        scanf("%[^\n]",&name);
        printf("Y\n");
    }
    return 0;
}
