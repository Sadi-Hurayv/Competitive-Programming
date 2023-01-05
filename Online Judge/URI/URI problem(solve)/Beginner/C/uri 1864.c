#include<stdio.h>
int main()
{
    int i, n;
    char sc[ ]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    scanf("%d",&n);
    for(i=0; i<n; i++)
        printf("%c",sc[i]);
    printf("\n");
    return 0;
}
