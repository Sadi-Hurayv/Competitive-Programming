#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000001];
    int m4, m15, m55, m100, m400, f, l, flag=0;
    while(scanf("%s",&ch)!=EOF)
    {
        if(flag==1)
            printf("\n");
        m4=m15=m55=m100=m400=0;
        l=0;
        f=0;
        int len=strlen(ch);
        for(int i=0; i<len; i++)
        {
            m4=((m4*10)+(ch[i]-'0'))%4;
            m100=((m100*10)+(ch[i]-'0'))%100;
            m400=((m400*10)+(ch[i]-'0'))%400;
            m15=((m15*10)+(ch[i]-'0'))%15;
            m55=((m55*10)+(ch[i]-'0'))%55;
        }
        if((m4==0 && m100!=0) || m400==0)
        {
            printf("This is leap year.\n");
            l=1;
        }
        if(m15==0)
        {
            printf("This is huluculu festival year.\n");
            f=1;
        }
        if(m55==0 && l==1)
        {
            printf("This is bulukulu festival year.\n");
        }
        if(l==0 && f==0)
        {
            printf("This is an ordinary year.\n");
        }
        flag=1;
    }
    return 0;
}
