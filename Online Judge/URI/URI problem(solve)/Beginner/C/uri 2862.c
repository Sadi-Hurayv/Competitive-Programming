#include<stdio.h>
int main()
{
    int t, e;
    while(scanf("%d",&t)!=EOF)
    {
        for(int i=0; i<t; i++)
        {
            scanf("%d",&e);
            if(e>8000)
            {
                printf("Mais de 8000!\n");
            }
            else
            {
                printf("Inseto!\n");
            }
        }
    }
    return 0;
}
