#include<stdio.h>
int main()
{
    int t, ID, id, typ, i, j;
    while(scanf("%d %d",&t,&ID)!=EOF)
    {
        int c=0;
        for(i=0; i<t; i++)
        {
            scanf("%d %d",&id,&typ);
            if(id==ID && typ==0)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
