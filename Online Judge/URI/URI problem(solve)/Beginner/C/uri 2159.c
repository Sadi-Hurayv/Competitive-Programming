#include<stdio.h>
#include<math.h>
int main()
{
    double num, r1, r2;
    scanf("%lf",&num);
    r1=num/log(num);
    r2=r1*1.25506;
    printf("%.1lf %.1lf\n",r1,r2);
    return 0;

}
