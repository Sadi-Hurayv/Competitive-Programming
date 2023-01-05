#include<stdio.h>
int main()
{
    double vol, dia, hi, area;
    while(scanf("%lf %lf",&vol,&dia)!=EOF)
    {
        area=3.14*(dia/2)*(dia/2);
        hi=vol/area;
        printf("ALTURA = %.2lf\n",hi);
        printf("AREA = %.2lf\n",area);
    }
    return 0;
}
