#include<stdio.h>
int main()
{
    int n, l, c;
    while(scanf("%d%d%d",&n,&l,&c)!=EOF)
    {
        char ch[n+1];
        getchar();
        scanf("%[^\n]",&ch);
        printf("%s\n\n",ch);
    }
}
