#include<stdio.h>
int main()
{
    int t, i;
    char sub[101];
    scanf("%d",&t);
    for(i=0; i<=t; i++)
    {
        scanf("%[^\n]s",&sub);
        getchar();
    }
    printf("Ciencia da Computacao\n");
    return 0;
}
