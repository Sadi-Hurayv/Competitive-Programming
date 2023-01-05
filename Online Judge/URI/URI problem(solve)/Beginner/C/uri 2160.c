#include<stdio.h>
#include<string.h>
int main()
{
    char ch[510];
    scanf("%[^\n]",&ch);
    if(strlen(ch)<=80)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
