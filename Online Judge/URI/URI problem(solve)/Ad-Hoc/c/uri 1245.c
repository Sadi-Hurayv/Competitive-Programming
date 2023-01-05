#include<stdio.h>
int main()
{
    int n, i, s, c;
    char ch;
    while(scanf("%d",&n)!=EOF)
    {
        int arrd[65]={0}, arre[65]={0};
        c=0;
        for(i=0; i<n; i++)
        {
            getchar();
            scanf("%d %c",&s,&ch);
            if(ch=='E')
            {
                arre[s]++;
            }
            else if(ch=='D')
            {
                arrd[s]++;
            }
            //printf("%d -> %c\n",s,ch);
        }

        for(i=30; i<=60; i++)
        {
            if(arrd[i]==arre[i])
            {
                c+=arrd[i];
            }
            else if(arrd[i]<arre[i])
            {
                c+=arrd[i];
            }
            else if(arrd[i]>arre[i])
            {
                c+=arre[i];
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
