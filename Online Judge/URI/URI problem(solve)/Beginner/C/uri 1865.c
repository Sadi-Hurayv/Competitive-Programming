#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, f;
    char na[10];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s %d",&na,&f);
        if(strcmp(na,"Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
