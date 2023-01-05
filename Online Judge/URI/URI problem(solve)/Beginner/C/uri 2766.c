
#include<stdio.h>
int main()
{
    char ch[40];
    int i;

        for(i=1; i<=10; i++)
        {
            fflush(stdin);
            scanf("%s",&ch[i]);
            if(i==3)
                printf("%s\n",ch);
            if(i==7)
                printf("%s\n",ch);
            if(i==9)
                printf("%s\n",ch);
        }

    return 0;
}
