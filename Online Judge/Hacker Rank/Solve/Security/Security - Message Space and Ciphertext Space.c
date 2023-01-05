#include<stdio.h>
#include<string.h>
int main()
{
    char ch[11];
    scanf("%[^\n]s",&ch);
    for(int i=0; i<strlen(ch); i++)
    {
        if(ch[i]=='9')
        {
            ch[i]='0';
        }
        else
            ch[i]=ch[i]+1;
    }
    printf("%s",ch);
    return 0;
}
