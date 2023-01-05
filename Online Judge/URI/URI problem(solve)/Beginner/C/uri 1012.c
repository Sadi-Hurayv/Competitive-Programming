#include<stdio.h>
#define PI 3.14159
int main()
{
    double A,B,C,tr,ra,trp,sq,rac;
    scanf("%lf%lf%lf",&A,&B,&C);
    tr=0.5*A*C;
    ra=PI*C*C;
    trp=C*((A+B)/2);
    sq=B*B;
    rac=A*B;
    printf("TRIANGULO: %.3lf\n",tr);
    printf("CIRCULO: %.3lf\n",ra);
    printf("TRAPEZIO: %.3lf\n",trp);
    printf("QUADRADO: %.3lf\n",sq);
    printf("RETANGULO: %.3lf\n",rac);
    return 0;
}
