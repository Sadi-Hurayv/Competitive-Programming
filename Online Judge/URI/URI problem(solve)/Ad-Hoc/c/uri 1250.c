#include<stdio.h>
int main()
{
    int t,i,j,k,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int higt[51];
        char stus[51];
        int c=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&higt[j]);
        }
        scanf("%s",&stus);
        k=0;
        while(stus[k]!='\0')
        {
            if(higt[k]<=2 && stus[k]=='S')
            {
                c++;
            }
            else if(higt[k]>2 && stus[k]=='J')
            {
                c++;
            }
            k++;
        }
        printf("%d\n",c);
    }
    return 0;
}
