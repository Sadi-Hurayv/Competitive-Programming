#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||(b*b-4*a*c<0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1=(-b+sqrt(b*b-4*a*c))/(2*a);
        r2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }

}
