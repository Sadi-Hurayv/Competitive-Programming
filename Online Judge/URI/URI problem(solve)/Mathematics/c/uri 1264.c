#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1025];
    int max, temp, len, total;
    while(scanf("%s",&ch)!=EOF)
    {
        max = -1;
        total=0;
        len=strlen(ch);
        for(int i=0; i<len; i++)
        {
            if(ch[i]=='-' || ch[i]=='+')
            {
                continue;
            }
            else
            {
                if(ch[i]>=48 && ch[i]<=57)
                {
                    temp=ch[i]-'0';
                    total+=temp;
                    //printf("T-%d\n",temp);
                    if(temp>max)
                        max=temp;
                }

                else if(ch[i]>=65 && ch[i]<=90)
                {
                    temp=ch[i]-'A'+10;
                    total+=temp;
                    //printf("T-%d\n",temp);
                    if(temp>max)
                    max=temp;
                }

                else if(ch[i]>=97 && ch[i]<=122)
                {
                    temp=ch[i]-'a'+36;
                    total+=temp;
                    //printf("T-%d\n",temp);
                    if(temp>max)
                    max=temp;
                }
            }
        }
        if(max<2)
            printf("2\n");
        else
        {
            while(max<62)
            {
                if(total%max==0)
                {
                    printf("%d\n",max+1);
                    break;
                }
                max++;
            }
            if(max==62)
                printf("such number is impossible!\n");
        }

    }
    return 0;
}
