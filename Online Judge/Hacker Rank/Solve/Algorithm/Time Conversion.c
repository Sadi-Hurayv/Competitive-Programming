#include<stdio.h>
#include<strings.h>
int main()
{
    char ch[11], FT[11];
    int t;
    scanf("%[^\n]s",&ch);
    //printf("%s",ch);
    t=10*(ch[0]-48)+(ch[1]-48);
    if(ch[8]=='P')
    {
        t=t%12+12;
        ch[1]=(t%10)+48;
        ch[0]=(t/10)+48;
    }
    else if(ch[8]=='A')
    {
        t=t%12;
        ch[1]=(t%10)+48;
        ch[0]=(t/10)+48;
    }
    strncpy(FT,ch,8);
    FT[8]='\0';
    printf("%s",FT);
    return 0;
}
