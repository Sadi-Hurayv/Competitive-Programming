#include<stdio.h>
int main()
{
    float oldp, newp, res;
    scanf("%f",&oldp);
    scanf("%f",&newp);
    res=((newp-oldp)/oldp)*100.00;
    printf("%.2f%%\n",res);
    return 0;
}
