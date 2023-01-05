#include<stdio.h>
int main()
{
    char n;
    double s,ss,ts;
    scanf("%s",&n);
    scanf("%lf%lf",&s,&ss);
    ts=s+ss*.15;
    printf("TOTAL = R$ %.2lf\n",ts);
    return 0;
}
