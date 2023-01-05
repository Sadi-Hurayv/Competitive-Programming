#include<stdio.h>
#include<string.h>
int main()
{
    char ch[510];
    scanf("%[^\n]",&ch);
    if(strlen(ch)<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    return 0;
}
