#include<stdio.h>
int main()
{
    char ch[30];
    int i=0;
    scanf("%s",ch);
    while(ch[i]!='\0')
    {
        if(ch[i]=='.' || ch[i]=='-')
            printf("\n");
        else
            printf("%c",ch[i]);
        i++;
    }
    printf("\n");
    return 0;
}
