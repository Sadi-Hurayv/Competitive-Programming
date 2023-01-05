#include<stdio.h>
int main()
{
    double a=234.345, b=45.698;
    printf("%lf - %lf\n",a,b);
    printf("%.0f - %.0lf\n",a,b);
    printf("%.1f - %.1lf\n",a,b);
    printf("234.34 - 45.70\n",a,b);
    printf("%.3f - %.3lf\n",a,b);
    printf("2.343450e+02 - 4.569800e+01\n",a,b);
    printf("2.343450E+02 - 4.569800E+01\n",a,b);
    printf("%.3f - %.3lf\n",a,b);
    printf("%.3f - %.3lf\n",a,b);
    return 0;
}
