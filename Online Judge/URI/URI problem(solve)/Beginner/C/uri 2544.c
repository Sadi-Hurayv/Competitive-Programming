#include<stdio.h>
int main()
{
    int cop, t, c;
    while(scanf("%d",&cop)!=EOF)
    {
        c=0;
        if(cop==1)
            t=0;
        else
        {
            while(cop>=1)
            {
                cop/=2;
                c++;
            }
            t=c-1;
        }
        printf("%d\n",t);
    }
    return 0;
}
