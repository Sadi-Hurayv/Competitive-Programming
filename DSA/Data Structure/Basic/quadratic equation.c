#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, x1, x2, D;
    printf("The common equation is ax^2 + bx + c= 0\n");
    printf("Enter the value of a : ");
    scanf("%lf",&a);
    printf("Enter the value of b : ");
    scanf("%lf",&b);
    printf("Enter the value of c : ");
    scanf("%lf",&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("The solutions are\nx1=%lf\nx2=%lf",x1,x2);
    }
    else if(D==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("The solutions are/nx1=%lf/nx2=%lf",x1,x2);
    }
    else
        printf("There is no real solution !!!");
    return 0;
}
