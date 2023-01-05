#include<stdio.h>
#include<string.h>
int main()
{
    char ch[11];
    int k;
    scanf("%[^\n]s",&ch);
    scanf("%d",&k);
    for(int i=0; i<strlen(ch); i++)
    {
        ch[i]=((ch[i]-48+k)%10)+48;
    }
    printf("%s",ch);
    return 0;
}
