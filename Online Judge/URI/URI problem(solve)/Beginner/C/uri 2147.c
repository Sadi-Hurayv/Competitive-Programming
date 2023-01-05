#include<stdio.h>
#include<string.h>
int main()
{
    int i, t;
    char ch[10010];
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%s",&ch);
        printf("%.2f\n",(strlen(ch)*0.01));
    }
    return 0;
}
