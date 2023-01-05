#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    double R,A;
    scanf("%lf",&R);
    A=(4.0/3)*PI*pow(R,3);
    printf("VOLUME = %.3lf\n",A);
    return 0;
}
