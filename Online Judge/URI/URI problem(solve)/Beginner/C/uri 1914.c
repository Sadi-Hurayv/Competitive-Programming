#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, n1, n2, sum;
    char na1[101], ch1[10], na2[101], ch2[10];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",&na1);
        scanf("%s",&ch1);
        scanf("%s",&na2);
        scanf("%s",&ch2);
        scanf("%d",&n1);
        scanf("%d",&n2);
        sum=n1+n2;
        if(sum%2!=0)
        {
            if(strcmp(ch1,"IMPAR")==0)
                printf("%s\n",na1);
            else if(strcmp(ch2,"IMPAR")==0)
                printf("%s\n",na2);
        }
        else
        {
            if(strcmp(ch1,"PAR")==0)
                printf("%s\n",na1);
            else if(strcmp(ch2,"PAR")==0)
                printf("%s\n",na2);
        }
    }
    return 0;
}
