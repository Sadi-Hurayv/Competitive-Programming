#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, amo, total;
    char ch[20];
    while(scanf("%d",&t) && t)
    {
        total=0;
        for(i=0; i<t; i++)
        {
            scanf("%d %[^\n]",&amo,&ch);

            if(strcmp(ch,"suco de laranja")==0)
                total+=(amo*120);
            else if(strcmp(ch,"morango fresco")==0)
                total+=(amo*85);
            else if(strcmp(ch,"mamao")==0)
                total+=(amo*85);
            else if(strcmp(ch,"goiaba vermelha")==0)
                total+=(amo*70);
            else if(strcmp(ch,"manga")==0)
                total+=(amo*56);
            else if(strcmp(ch,"laranja")==0)
                total+=(amo*50);
            else if(strcmp(ch,"brocolis")==0)
                total+=(amo*34);
        }
        if(total>130)
            printf("Menos %d mg\n",(total-130));
        else if(total<110)
            printf("Mais %d mg\n",(110-total));
        else
            printf("%d mg\n",total);
    }
    return 0;
}
