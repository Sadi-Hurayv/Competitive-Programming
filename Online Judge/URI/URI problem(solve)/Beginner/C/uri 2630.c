#include<stdio.h>
#include<string.h>
int main()
{
    int t, r, g, b, i, ans;
    char ch[10];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&ch);
        scanf("%d %d %d",&r,&g,&b);
        if(strcmp(ch,"eye")==0)
        {
            ans=r*.3+g*.59+b*.11;
        }
        else if(strcmp(ch,"mean")==0)
        {
            ans=(r+g+b)/3;
        }
        else if(strcmp(ch,"max")==0)
        {
            if(r>g && r>b)
            {
                ans=r;
            }
            else if(g>r && g>b)
            {
                ans=g;
            }
            else
            {
                ans=b;
            }

        }
        else if(strcmp(ch,"min")==0)
        {
            if(r<g && r<b)
            {
                ans=r;
            }
            else if(g<r && g<b)
            {
                ans=g;
            }
            else
            {
                ans=b;
            }
        }
        printf("Caso #%d: %d\n",i,ans);
    }
    return 0;
}
