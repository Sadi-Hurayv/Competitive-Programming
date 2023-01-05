#include<stdio.h>
#include<string.h>
int main()
{
    int ini, step, i, j;
    scanf("%d",&ini);
    scanf("%d",&step);
    char ch[step][7];
    for(i=0; i<step; i++)
    {

        scanf("%s",&ch[i]);
        if(strcmp(ch[i],"fechou")==0)
            ini++;
        else
            ini--;
    }
    printf("%d\n",ini);
    return 0;
}
