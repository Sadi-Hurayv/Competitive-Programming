#include<stdio.h>
int main()
{
    int num;
    double ans=0;
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
         ans+=2.0;
        ans = 1.0/ans;
    }
    ans=ans+1.00;
    printf("%.10lf\n",ans);
    return 0;
}
