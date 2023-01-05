#include<stdio.h>
int main()
{
    int n, i, res;
    while(scanf("%d",&n)!=EOF)
    {
        res=n/100;
        if(n%100!=0)
            res++;
        printf("%d\n",res);
    }

    return 0;
}
