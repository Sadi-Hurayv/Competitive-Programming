#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, c=0;
    char s[110];
    scanf("%s",&s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='1')
            c++;
    }
    if(c%2==0)
    {
        s[strlen(s)+1]='\0';
        s[strlen(s)]='0';
    }
    else
    {
        s[strlen(s)+1]='\0';
        s[strlen(s)]='1';
    }
    printf("%s\n",s);
    return 0;
}
