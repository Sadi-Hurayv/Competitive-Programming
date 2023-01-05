#include<stdio.h>
int main()
{
    int i, j, n;
    char ch[30];
    while(scanf("%s",&ch)!=EOF)
    {
        scanf("%d",&n);
        int bulb[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&bulb[i]);
        }
        for(i=0; i<n; i++)
        {
            printf("%c",ch[bulb[i]-1]);
        }
        printf("\n");
    }
    return 0;
}
